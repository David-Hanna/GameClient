#include "settingsview.h"

SettingsView::SettingsView(QWidget *parent) :
    QWidget(parent)
{
    fullScreenLabel = new QLabel("Full Screen: ");
    fullScreenLabel->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    fullScreenSelector = new QCheckBox;
    fullScreenSelector->setChecked(SettingsData::fullScreen());
    fullScreenLayout = new QHBoxLayout;
    fullScreenLayout->addWidget(fullScreenLabel);
    fullScreenLayout->addWidget(fullScreenSelector);

    windowSizeLabel = new QLabel("Screen Size: ");
    windowSizeSelector = new QComboBox;
    windowSizeSelector->addItem(WindowSizes::SIZE_1024x768);
    windowSizeSelector->addItem(WindowSizes::SIZE_1280x960);
    windowSizeSelector->addItem(WindowSizes::SIZE_1344x1008);
    windowSizeSelector->addItem(WindowSizes::SIZE_1600x900);
    windowSizeSelector->addItem(WindowSizes::SIZE_1600x1200);
    windowSizeSelector->addItem(WindowSizes::SIZE_2048x1152);
    windowSizeSelector->addItem(WindowSizes::SIZE_2560x1440);
    windowSizeSelector->setCurrentIndex(windowSizeSelector->findText(SettingsData::windowSize()));
    windowSizeSelector->setDisabled(fullScreenSelector->isChecked());
    windowSizeLayout = new QHBoxLayout;
    windowSizeLayout->addWidget(windowSizeLabel);
    windowSizeLayout->addWidget(windowSizeSelector);

    saveButton = new QPushButton("Save");
    applyButton = new QPushButton("Apply");
    backButton = new QPushButton("Back to Main Menu");

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

void SettingsView::fullScreenSelectorClickedSlot()
{
    windowSizeSelector->setDisabled(fullScreenSelector->isChecked());
}

void SettingsView::saveButtonPressedSlot()
{
    SettingsData::setFullScreen(fullScreenSelector->isChecked());
    SettingsData::setWindowSize(windowSizeSelector->currentText());

    QMessageBox box;
    if (SettingsData::writeSettings())
    {
        box.setText ("Saved successfully.");
        box.setIcon (QMessageBox::Information);
    }
    else
    {
        box.setText ("Save failed.");
        box.setIcon (QMessageBox::Warning);
    }
    box.setDefaultButton(QMessageBox::Ok);
    box.exec();
}

void SettingsView::applyButtonPressedSlot()
{
    // TODO
}

void SettingsView::backButtonPressedSlot()
{
    emit backButtonPressedSignal();
}
