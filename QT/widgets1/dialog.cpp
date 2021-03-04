#include "dialog.h"

#include <QFormLayout>
#include <QLabel>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QDialogButtonBox>
#include <QPushButton>
#include <QMessageBox>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent)
{   // Inicializando valores de la ventana
    this->resize(300, 200);
    this->setWindowTitle("Dialog de ejemplo");

    QVBoxLayout *mainLayout = new QVBoxLayout();
//    mainLayout->setAlignment(Qt::AlignTop);
    /* Creando Form Layout */
    QFormLayout *formLayout = new QFormLayout;
    QLabel *texto = new QLabel("Meteme texto");
    this->lineaTexto = new QLineEdit;
    formLayout->addRow(texto, lineaTexto);
    /*********************/

    QDialogButtonBox *buttonBox = new QDialogButtonBox(QDialogButtonBox::Ok | QDialogButtonBox::Cancel);
    QPushButton *botonHola = new QPushButton("Hola");
    botonHola->setMaximumWidth(100);
    QObject::connect(botonHola, SIGNAL(clicked()), this, SLOT(muestra_mensaje()));
    /* Añadiendo contenido a mainLayout */
    mainLayout->addLayout(formLayout); // Aquí meto formLayout a mainLayout
    mainLayout->addWidget(botonHola);
    mainLayout->addWidget(buttonBox);

    this->setLayout(mainLayout);
}

QString Dialog::obtener_mensaje()
{
    return this->lineaTexto->text();
}

void Dialog::muestra_mensaje()
{
    QMessageBox mb;
    mb.setText("Evento!");
    mb.setIcon(QMessageBox::Icon::Information);
    mb.exec();
}
