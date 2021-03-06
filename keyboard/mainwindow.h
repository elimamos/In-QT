#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include"buttonoperator.h"
#include<QString>
#include"const.h"
#include<vector>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    std::vector<ButtonOperator*> getButtonList();
    QTextEdit *getTextEdit ();
    QProgressBar *getProgressBar();
    std::vector<ButtonOperator*> getHintButtonList();
    QWidget *getMainWidget();
private slots:
    void on_leave_clicked();



    void on_menu_clicked();

    void on_textBox_textChanged();

private:
    Ui::MainWindow *ui;
    std::vector<ButtonOperator*> buttonList;
    std::vector<ButtonOperator*> hintButtonList;
    QTextEdit *textEdit;
    QProgressBar *progressBar;
    void setButtons();
    void setButtonInfo(ButtonOperator *myButton, QString s1,QString s2,QString s3,QString s4,QString s5, bool isSpecial);
    void setNoneChangingButton(ButtonOperator *myButton, QString s1, bool isSpecial);
    QWidget *mainWidget;


};

#endif // MAINWINDOW_H
