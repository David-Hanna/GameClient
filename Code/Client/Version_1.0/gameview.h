#ifndef GAMEVIEW_H
#define GAMEVIEW_H

#include <QWidget>

class GameView : public QWidget
{
    Q_OBJECT
public:
    explicit GameView(QWidget *parent = 0);
    virtual ~GameView();

signals:

public slots:

};

#endif // GAMEVIEW_H
