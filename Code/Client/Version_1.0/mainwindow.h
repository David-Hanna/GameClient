#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mainmenu.h"
#include "gameview.h"
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
    GameView *gameView;
    SettingsView *settingsView;

private:
    void showMainMenu();
    void showGame();
    void showSettings();

private slots:
    void startGameButtonPressedSlot();
    void settingsButtonPressedSlot();
    void backButtonPressedSlot();
};

#endif // MAINWINDOW_H
