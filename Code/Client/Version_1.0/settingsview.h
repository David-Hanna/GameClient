#ifndef SETTINGSVIEW_H
#define SETTINGSVIEW_H

#include "global.h"
#include "settingsdata.h"

#include <QWidget>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QMessageBox>

class SettingsView : public QWidget
{
    Q_OBJECT
public:
    explicit SettingsView(QWidget *parent = 0);
    virtual ~SettingsView();

private:
    QLabel *fullScreenLabel;
    QCheckBox *fullScreenSelector;
    QHBoxLayout *fullScreenLayout;

    QLabel *windowSizeLabel;
    QComboBox *windowSizeSelector;
    QHBoxLayout *windowSizeLayout;

    QPushButton *saveButton;
    QPushButton *applyButton;
    QPushButton *backButton;

    QVBoxLayout *verticalLayout;

    void setSettings();

signals:
    void backButtonPressedSignal();
    void applyButtonPressedSignal();

private slots:
    void fullScreenSelectorClickedSlot();
    void saveButtonPressedSlot();
    void applyButtonPressedSlot();
    void backButtonPressedSlot();

};

#endif // SETTINGSVIEW_H
