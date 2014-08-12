#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    showMainMenu();
}

MainWindow::~MainWindow()
{
}

void MainWindow::showMainMenu()
{
    mainMenu = new MainMenu();
    setCentralWidget(mainMenu);

    connect (mainMenu, SIGNAL(startGameButtonPressedSignal()), this, SLOT(startGameButtonPressedSlot()));
    connect (mainMenu, SIGNAL(settingsButtonPressedSignal()), this, SLOT(settingsButtonPressedSlot()));
}

void MainWindow::showGame()
{
    gameView = new GameView();
    setCentralWidget(gameView);
    if (fullScreen)
        showFullScreen();
    else
        showNormal();
}

void MainWindow::showSettings()
{
    settingsView = new SettingsView();
    setCentralWidget(settingsView);

    connect (settingsView, SIGNAL(backButtonPressedSignal()), this, SLOT(backButtonPressedSlot()));
}

void MainWindow::startGameButtonPressedSlot()
{
    showGame();
}

void MainWindow::settingsButtonPressedSlot()
{
    showSettings();
}

void MainWindow::backButtonPressedSlot()
{
    showMainMenu();
}
