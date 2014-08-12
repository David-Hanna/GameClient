#include "mainmenu.h"

MainMenu::MainMenu(QWidget *parent) :
    QWidget(parent)
{


    verticalLayout = new QVBoxLayout(this);

    startGame = new QPushButton("Start Game");
    settings = new QPushButton("Settings");
    exit = new QPushButton("Exit");

    connect(startGame, SIGNAL(clicked()), this, SLOT(startGameButtonPressedSlot()));
    connect(settings, SIGNAL(clicked()), this, SLOT(settingsButtonPressedSlot()));
    connect(exit, SIGNAL(clicked()), this, SLOT(exitButtonPressedSlot()));

    verticalLayout->addWidget(startGame);
    verticalLayout->addWidget(settings);
    verticalLayout->addWidget(exit);

    setLayout(verticalLayout);
}

MainMenu::~MainMenu()
{
    delete verticalLayout;
}

void MainMenu::startGameButtonPressedSlot()
{
    emit startGameButtonPressedSignal();
}

void MainMenu::settingsButtonPressedSlot()
{
    emit settingsButtonPressedSignal();
}

void MainMenu::exitButtonPressedSlot()
{
    QApplication::exit();
}
