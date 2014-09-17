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

private:
    QPushButton *playSinglePlayerGameButton;
    QPushButton *playMultiPlayerGameButton;
    QPushButton *returnToMainMenuButton;

    QVBoxLayout *topLayout;

signals:
    void playSinglePlayerGameButtonClickedSignal();
    void returnToMainMenuButtonClickedSignal();

private slots:
    void playSinglePlayerGameButtonClickedSlot();
    void playMultiPlayerGameButtonClickedSlot();
    void returnToMainMenuButtonClickedSlot();
};

#endif // NETWORKVIEW_H
