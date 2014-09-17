#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mainmenu.h"
#include "gameview.h"
#include "gameselectionview.h"
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
    GameSelectionView *gameSelectionView;
    GameView *gameView;
    SettingsView *settingsView;

private:
    void setSize();
    void showMainMenu();
    void showGameSelectionView();
    void showSinglePlayerGame();
    void showSettings();

private slots:
    void startGameButtonPressedSlot();
    void playSinglePlayerGameButtonClickedSlot();
    void settingsButtonPressedSlot();
    void backButtonPressedSlot();
    void applyButtonPressedSlot();
};

#endif // MAINWINDOW_H
