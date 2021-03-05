#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtWidgets>
#include <QVector>
#include "persona.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void muestra_mensaje(QString mensaje);
public Q_SLOTS:
    void inserta_persona();
    void muestra_persona(int row);
    void guardar();
    void cargar();
private:
    Ui::MainWindow *ui;
    QVector<Persona*> personas;
    void inserta_en_listas(Persona *p);
};
#endif // MAINWINDOW_H
