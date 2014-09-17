#ifndef MAINMENU_H
#define MAINMENU_H

#include "global.h"

#include <iostream>

#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QVBoxLayout>
#include <QPushButton>

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    virtual ~MainMenu();

private:
    QLabel *welcomeLabel;
    QPushButton *logInOutButton;
    QHBoxLayout *welcomeAndLogInOutLayout;

    QPushButton *startGame;
    QPushButton *seeMyProfileButton;
    QPushButton *settings;
    QPushButton *exit;

    QPushButton *connectionTestButton;
    QHBoxLayout *connectionTestLayout;

    QVBoxLayout *topLayout;

signals:
    void startGameButtonPressedSignal();
    void settingsButtonPressedSignal();

public slots:
    void logInOutButtonClickedSlot();
    void startGameButtonPressedSlot();
    void seeMyProfileButtonClickedSlot();
    void settingsButtonPressedSlot();
    void exitButtonPressedSlot();
    void connectionTestButtonClickedSlot();
};

#endif // MAINMENU_H
