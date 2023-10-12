#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    pQTimer = new QTimer(this);
    connect(pQTimer,SIGNAL(timeout()),this,SLOT(timeoutHandler));
    pQTimer->start(1000);

    ui->setupUi(this);
    connect(ui->switchToPlayer1, SIGNAL(clicked(bool)), this, SLOT(changePlayerHandler()));
    connect(ui->switchToPlayer2, SIGNAL(clicked(bool)), this, SLOT(changePlayerHandler()));
    connect(ui->gameTimeShort, SIGNAL(clicked(bool)), this, SLOT(selectTimeHandler()));
    connect(ui->gameTimeLong, SIGNAL(clicked(bool)), this, SLOT(selectTimeHandler()));
    connect(ui->startGame, SIGNAL(clicked(bool)), this, SLOT(startHandler()));
    connect(ui->stopGame, SIGNAL(clicked(bool)), this, SLOT(stopHandler()));
    connect(pQTimer, SIGNAL(timeout()), this, SLOT(updateTimeHandler()));
    ui->P1Progress->setRange(0,100);
    ui->P1Progress->setValue(100);
    ui->P2Progress->setRange(0,100);
    ui->P2Progress->setValue(100);
    status = 1;
    setGameInfoText("Give game time and press start!", 14);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::timeoutHandler()
{
    emit sendTimerUpdate();
}

void MainWindow::changePlayerHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString changePlayer = button->objectName();
    qDebug() << "Button name: " << changePlayer;

    currentPlayer = player1;
    if(changePlayer=="switchToPlayer2")
    {
        currentPlayer = player2;
        qDebug()<<"vaihdettiin pelaajaan 2";
    }
    else if(changePlayer=="switchToPlayer1")
    {
        currentPlayer = player1;
        qDebug()<<"vaihdettiin pelaajaan 1";
    }
}

void MainWindow::selectTimeHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString selectTime = button->objectName();
    qDebug() << "Button name: " << selectTime;

    if (selectTime == "gameTimeShort")
    {
        gameTime = 120;
        player1Time = gameTime;
        player2Time = gameTime;
        qDebug() << "short game selected";
    }
    else if (selectTime == "gameTimeLong")
    {
        gameTime = 300;
        player1Time = gameTime;
        player2Time = gameTime;
        qDebug() << "long game selected";
    }
    ui->gameProgress->setText("Press Start!");
}

void MainWindow::startHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString startStop = button->objectName();
    qDebug() << "Button name: " << startStop;
    status=2;

    if (status == 2)
    {
        ui->P1Progress->setRange(0,100);
        ui->P1Progress->setValue(100);
        ui->P2Progress->setRange(0,100);
        ui->P2Progress->setValue(100);
        pQTimer->start(1000);
        status=3;

        qDebug() << "Game started!";
    }
}

void MainWindow::stopHandler()
{
    QPushButton *button = qobject_cast<QPushButton *>(sender());
    QString startStop = button->objectName();
    qDebug() << "Button name: " << startStop;
    status=4;

    if (status == 4)
    {
        pQTimer->stop();
        setGameInfoText("Choose game time and start a new game via Start button",11);
    }
}
void MainWindow::updateTimeHandler()
{
    if (status==3)
    {
        ui->gameProgress->setText("Game ongoing!");
        qDebug()<<"Player"<<currentPlayer;
        if (currentPlayer==player1)
        {
            qDebug()<<"player 1 time decreasing";
            player1Time--;
            qDebug()<<player1Time;
            int showPlayer1Time = 100*player1Time/gameTime;
            qDebug() << "1";
            ui->P1Progress->setValue(showPlayer1Time);

            if(player1Time<=0)
            {
                status=4;
                ui->gameProgress->setText("Player 2 won");
            }
        }
        else if (currentPlayer==player2)
        {
            qDebug()<<"player 2 time decreasing";
            player2Time--;
            qDebug()<<player2Time;
            int showPlayer2Time = 100*player2Time/gameTime;
            qDebug() << "2";
            ui->P2Progress->setValue(showPlayer2Time);

            if(player2Time<=0)
            {
                status=4;
                ui->gameProgress->setText(QString::fromStdString("Player 1 won"));
            }
        }
    }
}
void MainWindow::setGameInfoText(QString teksti, short f)
{
    QFont font;
    font.setPointSize(f);
    ui->gameProgress->setFont(font);
    ui->gameProgress->setText(teksti);
}
