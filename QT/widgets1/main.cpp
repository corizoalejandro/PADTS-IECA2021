#include "widget.h"
#include "dialog.h"

#include <QApplication>
#include <QMessageBox>

void muestra_mensaje(QString mensaje);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    Widget w;
//    w.show();
    Dialog d;
    d.exec();
    muestra_mensaje(d.obtener_mensaje());
    return a.exec();
}

void muestra_mensaje(QString mensaje){
    QMessageBox mb;
    mb.setText(mensaje);
    mb.exec();
}
