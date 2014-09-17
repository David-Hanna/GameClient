#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    setSize();
    showMainMenu();
}

MainWindow::~MainWindow()
{
}

void MainWindow::setSize()
{
    if (SettingsData::isFullScreen())
    {
        showFullScreen();
    }
    else
    {
        showNormal();
        resize(SettingsData::getWindowWidth(), SettingsData::getWindowHeight());
    }
}

void MainWindow::showMainMenu()
{
    mainMenu = new MainMenu(this);
    setCentralWidget(mainMenu);
    setWindowTitle(GameStrings::STRING["MainMenu"]);

    connect (mainMenu, SIGNAL(startGameButtonPressedSignal()), this, SLOT(startGameButtonPressedSlot()));
    connect (mainMenu, SIGNAL(settingsButtonPressedSignal()), this, SLOT(settingsButtonPressedSlot()));
}

void MainWindow::showGameSelectionView()
{
    gameSelectionView = new GameSelectionView(this);
    setCentralWidget(gameSelectionView);
    setWindowTitle(GameStrings::STRING["NetworkingLobby"]);

    connect (gameSelectionView, SIGNAL(playSinglePlayerGameButtonClickedSignal()), this, SLOT(playSinglePlayerGameButtonClickedSlot()));
    connect (gameSelectionView, SIGNAL(returnToMainMenuButtonClickedSignal()), this, SLOT(backButtonPressedSlot()));
}

void MainWindow::showSinglePlayerGame()
{
    gameView = new GameView(this);
    setCentralWidget(gameView);
    setWindowTitle(GameStrings::STRING["GameTitle"]);
}

void MainWindow::showSettings()
{
    settingsView = new SettingsView();
    setCentralWidget(settingsView);
    setWindowTitle(GameStrings::STRING["Settings"]);

    connect (settingsView, SIGNAL(backButtonPressedSignal()), this, SLOT(backButtonPressedSlot()));
    connect (settingsView, SIGNAL(applyButtonPressedSignal()), this, SLOT(applyButtonPressedSlot()));
}

void MainWindow::startGameButtonPressedSlot()
{
    showGameSelectionView();
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

void MainWindow::applyButtonPressedSlot()
{
    setSize();
}
