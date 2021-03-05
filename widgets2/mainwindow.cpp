#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "nuevapersonadialog.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Info personas");
    ui->nombreLineEdit->setEnabled(false);
    ui->apellidosLineEdit->setEnabled(false);
    ui->edadLineEdit->setEnabled(false);

    /* Eventos */
    QObject::connect(ui->insertarPushButton, SIGNAL(clicked()), this, SLOT(inserta_persona()));
    QObject::connect(ui->listaPersonas, SIGNAL(currentRowChanged(int)), this, SLOT(muestra_persona(int)));
    QObject::connect(ui->actionSave, SIGNAL(triggered()), this, SLOT(guardar()));
    QObject::connect(ui->actionLoad, SIGNAL(triggered()), this, SLOT(cargar()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::muestra_mensaje(QString mensaje)
{
    QMessageBox mb;
    mb.setText(mensaje);
    mb.setIcon(QMessageBox::Icon::Information);
    mb.exec();
}

void MainWindow::inserta_persona()
{
    NuevaPersonaDialog *w = new NuevaPersonaDialog();
    int resultado = w->exec();
    switch (resultado) {
    case QDialog::Accepted:
        inserta_en_listas(w->get_persona());
        break;
    case QDialog::Rejected:
//        muestra_mensaje("Rechazado");
        break;
    default:
        muestra_mensaje("No reconozco el resultado.");
        break;
    }
}

void MainWindow::muestra_persona(int row)
{
    if(row == -1)
        return;
    Persona *p = personas.at(row);
    ui->nombreLineEdit->setText(QString(p->getNombre().c_str()));
    ui->apellidosLineEdit->setText(QString(p->getApellidos().c_str()));
    ui->edadLineEdit->setText(QString::number(p->getEdad()));
}

void MainWindow::guardar()
{
    QJsonArray personasArray;
    QJsonObject mainObject;
    // Toma la ruta del archivo
    QString fileName = QFileDialog::getSaveFileName(this, "Personas json", "", QString("*.json"));
    QFile archivito(fileName);
    // Itera personas
    Q_FOREACH(Persona *p, personas){
        // Mete info de la persona en el array
        personasArray.push_back(p->get_json());
    }
    // inserta el arreglo de personas en Json en el objeto json principal
    mainObject.insert("Personas", personasArray);
    // Crea el documento json
    QJsonDocument document(mainObject);
    // Guarda el json en archivo
    if(!archivito.open(QIODevice::WriteOnly | QIODevice::Text)){
        muestra_mensaje("No se pudo abrir el archivo");
        return;
    }
    archivito.write(document.toJson());
    archivito.close();
    muestra_mensaje("Todo bien");
}

void MainWindow::cargar()
{
    // Toma el nombre del archivo a cargar
    QString fileName = QFileDialog::getOpenFileName(this, "Personas json", "", QString("*.json"));
    QFile archivito(fileName);
    // Abre el archivo
    if(!archivito.open(QIODevice::ReadOnly)){
        muestra_mensaje("No se pudo abrir el archivo");
        return;
    }
    // Lee los datos del archivo
    QString data = QString(archivito.readAll());
    archivito.close();
    // Mete los datos del archivo a un Json Object
    QJsonObject mainObject = QJsonDocument::fromJson(data.toUtf8()).object();
    QJsonArray personasArray = mainObject.value("Personas").toArray();
    // Recorre el arreglo y lo mete sobre personas
    Q_FOREACH(QJsonValue val, personasArray){
        QJsonObject object = val.toObject();
        Persona *p = new Persona(object);
        inserta_en_listas(p);
    }
}

void MainWindow::inserta_en_listas(Persona *p)
{
    personas.push_back(p);
    ui->listaPersonas->addItem(QString(p->getNombre().c_str()));
}

