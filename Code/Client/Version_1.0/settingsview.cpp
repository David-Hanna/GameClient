#include "settingsview.h"

SettingsView::SettingsView(QWidget *parent) :
    QWidget(parent)
{
    fullScreenLabel = new QLabel(GameStrings::STRING["FullScreenLabel"]);
    fullScreenLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    fullScreenSelector = new QCheckBox;
    fullScreenSelector->setChecked(SettingsData::isFullScreen());
    fullScreenLayout = new QHBoxLayout;
    fullScreenLayout->addWidget(fullScreenLabel);
    fullScreenLayout->addWidget(fullScreenSelector);

    windowSizeLabel = new QLabel(GameStrings::STRING["ScreenSizeLabel"]);
    windowSizeSelector = new QComboBox;

    for (int i = 0; i < Config::WINDOW_SIZES.size(); i++)
    {
        windowSizeSelector->addItem(Config::WINDOW_SIZES[i]);
    }

    windowSizeSelector->setCurrentIndex(windowSizeSelector->findText(SettingsData::getWindowSize()));
    windowSizeSelector->setDisabled(fullScreenSelector->isChecked());
    windowSizeLayout = new QHBoxLayout;
    windowSizeLayout->addWidget(windowSizeLabel);
    windowSizeLayout->addWidget(windowSizeSelector);

    saveButton = new QPushButton(GameStrings::STRING["Save"]);
    applyButton = new QPushButton(GameStrings::STRING["Apply"]);
    backButton = new QPushButton(GameStrings::STRING["ReturnToMainMenu"]);

    connect(fullScreenSelector, SIGNAL(clicked()), this, SLOT(fullScreenSelectorClickedSlot()));
    connect(saveButton, SIGNAL(clicked()), this, SLOT(saveButtonPressedSlot()));
    connect(applyButton, SIGNAL(clicked()), this, SLOT(applyButtonPressedSlot()));
    connect(backButton, SIGNAL(clicked()), this, SLOT(backButtonPressedSlot()));

    verticalLayout = new QVBoxLayout;
    verticalLayout->addLayout(fullScreenLayout);
    verticalLayout->addLayout(windowSizeLayout);
    verticalLayout->addWidget(saveButton);
    verticalLayout->addWidget(applyButton);
    verticalLayout->addWidget(backButton);

    setLayout(verticalLayout);
}

SettingsView::~SettingsView()
{
    delete verticalLayout;
}

void SettingsView::setSettings()
{
    SettingsData::setFullScreen(fullScreenSelector->isChecked());
    SettingsData::setWindowSize(windowSizeSelector->currentText());
}

void SettingsView::fullScreenSelectorClickedSlot()
{
    windowSizeSelector->setDisabled(fullScreenSelector->isChecked());
}

void SettingsView::saveButtonPressedSlot()
{
    setSettings();

    QMessageBox box;
    if (SettingsData::writeSettings())
    {
        box.setText (GameStrings::STRING["SaveSuccessful"]);
        box.setIcon (QMessageBox::Information);
        applyButtonPressedSlot();
    }
    else
    {
        box.setText (GameStrings::STRING["SaveFailed"]);
        box.setIcon (QMessageBox::Warning);
    }
    box.setDefaultButton(QMessageBox::Ok);
    box.exec();
}

void SettingsView::applyButtonPressedSlot()
{
    setSettings();
    emit applyButtonPressedSignal();
}

void SettingsView::backButtonPressedSlot()
{
    emit backButtonPressedSignal();
}
