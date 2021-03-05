#ifndef NUEVAPERSONADIALOG_H
#define NUEVAPERSONADIALOG_H

#include <QDialog>
#include "persona.h"

namespace Ui {
class NuevaPersonaDialog;
}

class NuevaPersonaDialog : public QDialog
{
    Q_OBJECT

public:
    explicit NuevaPersonaDialog(QWidget *parent = nullptr);
    ~NuevaPersonaDialog();
    Persona * get_persona();
    void closeEvent(QCloseEvent *);

private:
    Ui::NuevaPersonaDialog *ui;
};

#endif // NUEVAPERSONADIALOG_H
