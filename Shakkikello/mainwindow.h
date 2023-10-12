#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QObject>
#include <QWidget>
#include <QMainWindow>
#include <QTimer>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void timeoutHandler();

public slots:
    void changePlayerHandler();
    void selectTimeHandler();
    void startHandler();
    void stopHandler();
    void updateTimeHandler();

signals:
    void sendTimerUpdate();

private:
    Ui::MainWindow *ui;
    int player1Time = 0;
    int player2Time = 0;
    int player1;
    int player2;
    short currentPlayer = player1;
    int gameTime;
    QTimer * pQTimer;
    void setGameInfoText(QString, short);
    int status;
};
#endif // MAINWINDOW_H
