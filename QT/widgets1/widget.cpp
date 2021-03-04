#include "widget.h"
#include <QHBoxLayout>
#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *mainLayout = new QHBoxLayout;
    QLabel *texto = new QLabel("Hola mundo!");
    mainLayout->addWidget(texto);
    this->setLayout(mainLayout);
    this->resize(300,200); // usa pixeles
    this->setWindowTitle("Hola mundo widget");
}

Widget::~Widget()
{
}

