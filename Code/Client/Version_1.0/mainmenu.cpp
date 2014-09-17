#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent)
{
    welcomeLabel = new QLabel(GameStrings::STRING["Welcome"]);
    welcomeLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    logInOutButton = new QPushButton(GameStrings::STRING["LogIn"]);
    welcomeAndLogInOutLayout = new QHBoxLayout;
    welcomeAndLogInOutLayout->addWidget(welcomeLabel);
    welcomeAndLogInOutLayout->addWidget(logInOutButton);

    startGame = new QPushButton(GameStrings::STRING["StartGame"]);
    seeMyProfileButton = new QPushButton(GameStrings::STRING["ViewMyProfile"]);
    settings = new QPushButton(GameStrings::STRING["Settings"]);
    exit = new QPushButton(GameStrings::STRING["Exit"]);

    connectionTestButton = new QPushButton(GameStrings::STRING["ConnectionTest"]);
    connectionTestLayout = new QHBoxLayout;
    connectionTestLayout->addWidget(connectionTestButton, 0, Qt::AlignRight);

    connect(logInOutButton, SIGNAL(clicked()), this, SLOT(logInOutButtonClickedSlot()));
    connect(startGame, SIGNAL(clicked()), this, SLOT(startGameButtonPressedSlot()));
    connect(seeMyProfileButton, SIGNAL(clicked()), this, SLOT(seeMyProfileButtonClickedSlot()));
    connect(settings, SIGNAL(clicked()), this, SLOT(settingsButtonPressedSlot()));
    connect(exit, SIGNAL(clicked()), this, SLOT(exitButtonPressedSlot()));
    connect(connectionTestButton, SIGNAL(clicked()), this, SLOT(connectionTestButtonClickedSlot()));

    topLayout = new QVBoxLayout(this);

    topLayout->addLayout(welcomeAndLogInOutLayout);
    topLayout->addWidget(startGame);
    topLayout->addWidget(seeMyProfileButton);
    topLayout->addWidget(settings);
    topLayout->addWidget(exit);
    topLayout->addLayout(connectionTestLayout);

    setLayout(topLayout);
}

MainMenu::~MainMenu()
{
    delete topLayout;
}

void MainMenu::logInOutButtonClickedSlot()
{

}

void MainMenu::startGameButtonPressedSlot()
{
    emit startGameButtonPressedSignal();
}

void MainMenu::seeMyProfileButtonClickedSlot()
{

}

void MainMenu::settingsButtonPressedSlot()
{
    emit settingsButtonPressedSignal();
}

void MainMenu::exitButtonPressedSlot()
{
    QApplication::exit();
}

void MainMenu::connectionTestButtonClickedSlot()
{

}
