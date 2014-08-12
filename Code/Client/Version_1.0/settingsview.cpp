#include "settingsview.h"

SettingsView::SettingsView(QWidget *parent) :
    QWidget(parent)
{
    readSettings();

    layout = new QVBoxLayout(this);

    resolutionSelector = new QComboBox;
    resolutionSelector->addItem("Varying Screen Resolutions go here");

    fullScreenSelector = new QCheckBox("Full Screen");
    fullScreenSelector->setChecked(fullScreen);

    backButton = new QPushButton("Back to Main Menu");

    connect(fullScreenSelector, SIGNAL(clicked(bool)), this, SLOT(setFullScreen(bool)));
    connect(backButton, SIGNAL(clicked()), this, SLOT(backButtonPressedSlot()));

    layout->addWidget(resolutionSelector);
    layout->addWidget(fullScreenSelector);
    layout->addWidget(backButton);

    setLayout(layout);
}

SettingsView::~SettingsView()
{
}

void SettingsView::setFullScreen(bool checked)
{
    fullScreen = checked;
}

void SettingsView::backButtonPressedSlot()
{
    writeSettings();
    emit backButtonPressedSignal();
}
