#include "mainwindow.h"
#include "abstractFactory.h"
#include <QDoubleSpinBox>
#include <QLCDNumber>
#include <QPushButton>
#include <QGridLayout>
#include <QPushButton>
#include <QButtonGroup>
#include <QtMath>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    numA(new QDoubleSpinBox()),
    numB(new QDoubleSpinBox()),
    addBtn(new QPushButton("+")),
    subBtn(new QPushButton("-")),
    divBtn(new QPushButton("/")),
    mulBtn(new QPushButton("*")),
    clearBtn(new QPushButton("clear")),
    lcd(new QLCDNumber())
{
    QWidget *central = new QWidget(this);
    QGridLayout *guiLayout=new QGridLayout;
    guiLayout->addWidget(numA,0,0);
    guiLayout->addWidget(numB,1,0);
    guiLayout->addWidget(lcd,2,0);
    guiLayout->addWidget(clearBtn,3,0);

    opGroup = new QButtonGroup(this);
    opGroup->addButton(addBtn, '+');
    opGroup->addButton(subBtn, '-');
    opGroup->addButton(mulBtn, '*');
    opGroup->addButton(divBtn, '/');

    guiLayout->addWidget(addBtn,0,1);
    guiLayout->addWidget(subBtn,1,1);
    guiLayout->addWidget(divBtn,2,1);
    guiLayout->addWidget(mulBtn,3,1);

    central->setLayout(guiLayout);

    setCentralWidget(central);

    connect(opGroup, &QButtonGroup::idClicked,this, &MainWindow::operatorClicked);
    connect(clearBtn, &QPushButton::clicked, this, &MainWindow::clearBtnClicked);
    connect(addBtn, &QPushButton::clicked, this, &MainWindow::addBtnClicked);
}

MainWindow::~MainWindow()
{
}

void MainWindow::clearBtnClicked()
{
    lcd->display(0);
}

void MainWindow::operatorClicked(int id)
{
    operation *op = abstractFactory::instance().create(static_cast<char>(id));

    double result = op->compute(numA->value(), numB->value());
    lcd->display(result);

    delete op;
}
// example of singular

