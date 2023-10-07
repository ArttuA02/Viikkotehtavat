#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->N0,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N1,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N2,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N3,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N4,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N5,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N6,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N7,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N8,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->N9,SIGNAL(clicked(bool)),this,SLOT(handleNumberClicked()));
    connect(ui->sum,SIGNAL(clicked(bool)),this,SLOT(handleAddSubMulDivClick()));
    connect(ui->sub,SIGNAL(clicked(bool)),this,SLOT(handleAddSubMulDivClick()));
    connect(ui->multiply,SIGNAL(clicked(bool)),this,SLOT(handleAddSubMulDivClick()));
    connect(ui->divide,SIGNAL(clicked(bool)),this,SLOT(handleAddSubMulDivClick()));
    connect(ui->equals,SIGNAL(clicked(bool)),this,SLOT(handleclearAndEnterClick()));
    connect(ui->clear,SIGNAL(clicked(bool)),this,SLOT(handleclearAndEnterClick()));
    state = 0;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::handleNumberClicked()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString name = button->objectName();

    if (state == 0)
    {
        number1 += name.rightRef(1);
        ui->num1->setText(number1);
    }
    else if (state == 1)
    {
        number2 += name.rightRef(1);
        ui->num2->setText(number2);
    }
}

void MainWindow::handleclearAndEnterClick()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString buttonName = button->objectName();
    if (buttonName == "clear")
    {
        ui->num1->clear();
        number1.clear();
        ui->num2->clear();
        number2.clear();
        ui->result->clear();
        result = 0;
        state = 0;
    }
    else if (buttonName == "equals")
    {
        float n1 = number1.toFloat();
        float n2 = number2.toFloat();
        switch(operand)
        {
        case 0:
            result = n1 + n2;
            ui->result->setText(QString::number(result));
            break;
        case 1:
            result = n1 - n2;
            ui->result->setText(QString::number(result));
            break;
        case 2:
            result = n1 * n2;
            ui->result->setText(QString::number(result));
            break;
        case 3:
            result = n1 / n2;
            ui->result->setText(QString::number(result));
            break;
        }
    }
}

void MainWindow::handleAddSubMulDivClick()
{
    QPushButton * button = qobject_cast<QPushButton*>(sender());
    QString operandStr = button->objectName();

    operand = -1;

    if (operandStr == "sum") {
        operand = 0;
    } else if (operandStr == "sub") {
        operand = 1;
    } else if (operandStr == "multiply") {
        operand = 2;
    } else if (operandStr == "divide") {
        operand = 3;
    }

    state = 1;
}

void MainWindow::resetLineEdits()
{

}




