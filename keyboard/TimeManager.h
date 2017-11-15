#ifndef MYTIMER_H
#define MYTIMER_H

#include <QtCore>
#include"buttonoperator.h"
#include "hovermanager.h"
#include<vector>
#include"qroundprogressbar.h"
#include"dictionary.h"

class TimeManager : public QObject
{

    Q_OBJECT
public:
    TimeManager(std::vector<ButtonOperator*> sButtonList,QTextEdit *sTextEdit,QRoundProgressBar *sProgressBar ,std::vector<ButtonOperator*> sHintButtonList);
    QTimer *timer;
    HoverManager *updateHoverState(int currentHover);



    void startTimer();
private:
    HoverManager *hoverState;
    std::vector<ButtonOperator*> buttonList;
    std::vector<ButtonOperator*> hintButtonList;
    QTextEdit *textEdit;
    QRoundProgressBar *roundProgressBar;
    int getHoveredButton();
    HoverManager *executeTimerStep();
    HoverManager *executeSpecialButton();
    void executeNormalButton();
    void updateButtonLook();
    Dictionary *dictionary;







public slots:
    void TimerStep();
};

#endif // MYTIMER_H
