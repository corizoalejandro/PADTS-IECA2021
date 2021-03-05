#include "nuevapersonadialog.h"
#include "ui_nuevapersonadialog.h"

NuevaPersonaDialog::NuevaPersonaDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::NuevaPersonaDialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Nueva Persona");
}

NuevaPersonaDialog::~NuevaPersonaDialog()
{
    delete ui;
}

Persona *NuevaPersonaDialog::get_persona()
{
    Persona *p = new Persona(ui->nombreLineEdit->text().toStdString(),
                             ui->apellidosLineEdit->text().toStdString(),
                             ui->edadLineEdit->text().toInt());
    return p;
}

void NuevaPersonaDialog::closeEvent(QCloseEvent *e)
{
    if(ui->edadLineEdit->text().isEmpty() || ui->edadLineEdit->text().toInt() == 0){
        return;
    }
    QDialog::closeEvent(e);
}
