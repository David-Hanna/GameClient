#include "networkview.h"

NetworkView::NetworkView(QWidget *parent) :
    QWidget(parent)
{
    welcomeLabel = new QLabel("Welcome, ");
    welcomeLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    logInOutButton = new QPushButton("Log In");
    welcomeAndLogInOutLayout = new QHBoxLayout;
    welcomeAndLogInOutLayout->addWidget(welcomeLabel);
    welcomeAndLogInOutLayout->addWidget(logInOutButton);

    playSinglePlayerGameButton = new QPushButton("Play Single Player Mode");
    playMultiPlayerGameButton = new QPushButton("Play Multi Player Mode");
    seeMyProfileButton = new QPushButton("View My Profile");
    returnToMainMenuButton = new QPushButton("Return to Main Menu");

    connectionTestButton = new QPushButton("Internet Connection Test");
    connectionTestLayout = new QHBoxLayout;
    connectionTestLayout->addWidget(connectionTestButton, 0, Qt::AlignRight);

    connect(logInOutButton, SIGNAL(clicked()), this, SLOT(logInOutButtonClickedSlot()));
    connect(playSinglePlayerGameButton, SIGNAL(clicked()), this, SLOT(playSinglePlayerGameButtonClickedSlot()));
    connect(playMultiPlayerGameButton, SIGNAL(clicked()), this, SLOT(playMultiPlayerGameButtonClickedSlot()));
    connect(seeMyProfileButton, SIGNAL(clicked()), this, SLOT(seeMyProfileButtonClickedSlot()));
    connect(returnToMainMenuButton, SIGNAL(clicked()), this, SLOT(returnToMainMenuButtonClickedSlot()));
    connect(connectionTestButton, SIGNAL(clicked()), this, SLOT(connectionTestButtonClickedSlot()));

    verticalLayout = new QVBoxLayout;
    verticalLayout->addLayout(welcomeAndLogInOutLayout);
    verticalLayout->addWidget(playSinglePlayerGameButton);
    verticalLayout->addWidget(playMultiPlayerGameButton);
    verticalLayout->addWidget(seeMyProfileButton);
    verticalLayout->addWidget(returnToMainMenuButton);
    verticalLayout->addLayout(connectionTestLayout);

    setLayout(verticalLayout);
}

NetworkView::~NetworkView()
{
    delete verticalLayout;
}

void NetworkView::logInOutButtonClickedSlot()
{

}

void NetworkView::playSinglePlayerGameButtonClickedSlot()
{
    emit playSinglePlayerGameButtonClickedSignal();
}

void NetworkView::playMultiPlayerGameButtonClickedSlot()
{

}

void NetworkView::seeMyProfileButtonClickedSlot()
{

}

void NetworkView::returnToMainMenuButtonClickedSlot()
{
    emit returnToMainMenuButtonClickedSignal();
}

void NetworkView::connectionTestButtonClickedSlot()
{

}
