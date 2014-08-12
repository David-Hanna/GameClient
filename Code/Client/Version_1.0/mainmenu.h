#ifndef MAINMENU_H
#define MAINMENU_H

#include <iostream>

#include <QApplication>
#include <QWidget>
#include <QVBoxLayout>
#include <QPushButton>

class MainMenu : public QWidget
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = 0);
    virtual ~MainMenu();

private:
    QVBoxLayout *verticalLayout;
    QPushButton *startGame;
    QPushButton *settings;
    QPushButton *exit;

signals:
    void startGameButtonPressedSignal();
    void settingsButtonPressedSignal();

public slots:
    void startGameButtonPressedSlot();
    void settingsButtonPressedSlot();
    void exitButtonPressedSlot();

};

#endif // MAINMENU_H
