#ifndef SETTINGSVIEW_H
#define SETTINGSVIEW_H

#include "settingsdata.h"
#include <QWidget>
#include <QVBoxLayout>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>

class SettingsView : public QWidget
{
    Q_OBJECT
public:
    explicit SettingsView(QWidget *parent = 0);
    virtual ~SettingsView();

private:
    QVBoxLayout *layout;
    QComboBox *resolutionSelector;
    QCheckBox *fullScreenSelector;
    QPushButton *backButton;

signals:
    void backButtonPressedSignal();

private slots:
    void setFullScreen(bool checked);
    void backButtonPressedSlot();

};

#endif // SETTINGSVIEW_H
