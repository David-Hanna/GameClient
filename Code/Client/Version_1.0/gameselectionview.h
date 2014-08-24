#ifndef NETWORKVIEW_H
#define NETWORKVIEW_H

#include "global.h"

#include <QString>
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

class GameSelectionView : public QWidget
{
    Q_OBJECT
public:
    explicit GameSelectionView(QWidget *parent = 0);
    virtual ~GameSelectionView();

protected:
    QLabel *welcomeLabel;
    QPushButton *logInOutButton;
    QHBoxLayout *welcomeAndLogInOutLayout;

    QPushButton *playSinglePlayerGameButton;
    QPushButton *playMultiPlayerGameButton;
    QPushButton *seeMyProfileButton;
    QPushButton *returnToMainMenuButton;

    QPushButton *connectionTestButton;
    QHBoxLayout *connectionTestLayout;

    QVBoxLayout *verticalLayout;

signals:
    void playSinglePlayerGameButtonClickedSignal();
    void returnToMainMenuButtonClickedSignal();

private slots:
    void logInOutButtonClickedSlot();
    void playSinglePlayerGameButtonClickedSlot();
    void playMultiPlayerGameButtonClickedSlot();
    void seeMyProfileButtonClickedSlot();
    void returnToMainMenuButtonClickedSlot();
    void connectionTestButtonClickedSlot();
};

#endif // NETWORKVIEW_H
