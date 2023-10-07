#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>
#include <myclass.h>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QString number1,number2;
    int state;
    float result;
    short operand;

public slots:
    void handleNumberClicked();
    void handleclearAndEnterClick();
    void handleAddSubMulDivClick();
    void resetLineEdits();
};
#endif // MAINWINDOW_H
