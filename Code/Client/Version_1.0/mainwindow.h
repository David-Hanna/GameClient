#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mainmenu.h"
#include "gameview.h"
#include "networkview.h"
#include "settingsview.h"
#include "settingsdata.h"

#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    MainMenu *mainMenu;
    NetworkView *networkView;
    GameView *gameView;
    SettingsView *settingsView;

private:
    void showMainMenu();
    void showNetworkView();
    void showSinglePlayerGame();
    void showSettings();

private slots:
    void startGameButtonPressedSlot();
    void settingsButtonPressedSlot();
    void backButtonPressedSlot();
};

#endif // MAINWINDOW_H
