#include "gameselectionview.h"

GameSelectionView::GameSelectionView(QWidget *parent) :
    QWidget(parent)
{
    playSinglePlayerGameButton = new QPushButton(GameStrings::STRING["PlaySinglePlayerMode"]);
    playMultiPlayerGameButton = new QPushButton(GameStrings::STRING["PlayMultiPlayerMode"]);
    returnToMainMenuButton = new QPushButton(GameStrings::STRING["ReturnToMainMenu"]);

    connect(playSinglePlayerGameButton, SIGNAL(clicked()), this, SLOT(playSinglePlayerGameButtonClickedSlot()));
    connect(playMultiPlayerGameButton, SIGNAL(clicked()), this, SLOT(playMultiPlayerGameButtonClickedSlot()));
    connect(returnToMainMenuButton, SIGNAL(clicked()), this, SLOT(returnToMainMenuButtonClickedSlot()));

    topLayout = new QVBoxLayout;

    topLayout->addWidget(playSinglePlayerGameButton);
    topLayout->addWidget(playMultiPlayerGameButton);
    topLayout->addWidget(returnToMainMenuButton);

    setLayout(topLayout);
}

GameSelectionView::~GameSelectionView()
{
    delete topLayout;
}

void GameSelectionView::playSinglePlayerGameButtonClickedSlot()
{
    emit playSinglePlayerGameButtonClickedSignal();
}

void GameSelectionView::playMultiPlayerGameButtonClickedSlot()
{

}

void GameSelectionView::returnToMainMenuButtonClickedSlot()
{
    emit returnToMainMenuButtonClickedSignal();
}
