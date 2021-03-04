#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QLineEdit>

class Dialog : public QDialog
{
    Q_OBJECT
    QLineEdit *lineaTexto;
public:
    Dialog(QWidget *parent = nullptr);
    QString obtener_mensaje();
public Q_SLOTS:
    void muestra_mensaje();
};

#endif // DIALOG_H
