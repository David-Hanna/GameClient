#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    showMainMenu();
    resize(400, 400);
}

MainWindow::~MainWindow()
{
}

void MainWindow::showMainMenu()
{
    mainMenu = new MainMenu();
    setCentralWidget(mainMenu);
    setWindowTitle("Main Menu");

    connect (mainMenu, SIGNAL(startGameButtonPressedSignal()), this, SLOT(startGameButtonPressedSlot()));
    connect (mainMenu, SIGNAL(settingsButtonPressedSignal()), this, SLOT(settingsButtonPressedSlot()));
}

void MainWindow::showNetworkView()
{
    networkView = new NetworkView;
    setCentralWidget(networkView);
    setWindowTitle("Networking Lobby");

    connect (networkView, SIGNAL(playSinglePlayerGameButtonClickedSignal()), this, SLOT(playSinglePlayerGameButtonClickedSlot()));
    connect (networkView, SIGNAL(returnToMainMenuButtonClickedSignal()), this, SLOT(backButtonPressedSlot()));
}

void MainWindow::showSinglePlayerGame()
{
    gameView = new GameView;
    setCentralWidget(gameView);
    setWindowTitle("UPEI Game");

    if (SettingsData::fullScreen())
    {
        showFullScreen();
    }
    else
    {
        showNormal();
    }
}

void MainWindow::showSettings()
{
    settingsView = new SettingsView();
    setCentralWidget(settingsView);
    setWindowTitle("Settings");

    connect (settingsView, SIGNAL(backButtonPressedSignal()), this, SLOT(backButtonPressedSlot()));
}

void MainWindow::startGameButtonPressedSlot()
{
    showNetworkView();
}

void MainWindow::settingsButtonPressedSlot()
{
    showSettings();
}

void MainWindow::playSinglePlayerGameButtonClickedSlot()
{
    showSinglePlayerGame();
}

void MainWindow::backButtonPressedSlot()
{
    showMainMenu();
}
