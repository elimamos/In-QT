#include "mainwindow.h"
#include "ui_mainwindow.h"
#include  <QPushButton>
#include "buttonoperator.h"
#include <QStringList>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{


    ui->setupUi(this);

     setButtons();
    /*m_button[0] = ui->zero;
   m_button[0]->setIndex(3);
    QStringList qlist;
    qlist.append("ELEMENT1");
    qlist.append("ELEMENT2");
    m_button[0]->setDisplayList(qlist);

    qDebug()<<m_button[0]->getIndex();
    qDebug()<<m_button[0]->getDisplayList().at(1);
    m_button[0]->setText(m_button[0]->getDisplayList().at(1));*/

  //  connect(ui->zero,SIGNAL(onHover()),ui->textEdit,SLOT(setText()));

}
void MainWindow::setButtons(){
    textEdit=ui->textBox;
    setNoneChangingButton(ui->b1,0,"1",false);
    setButtonInfo(ui->b11,10,"q","Q","=",":)","Ą",false);
    //buttonList[0]->setText(buttonList[0]->getDisplayList().at(1));

}
ButtonOperator *MainWindow::getButtonList(){
    return *buttonList;
}

void MainWindow::setButtonInfo(ButtonOperator *myButton,int index, QString s1,QString s2,QString s3,QString s4,QString s5,bool isSpecial){
    buttonList[index]=myButton;
    buttonList[index]->setIndex(index);
    QStringList myList;
    myList.append(s1);
    myList.append(s2);
    myList.append(s3);
    myList.append(s4);
    myList.append(s5);
    buttonList[index]->setDisplayList(myList);
    buttonList[index]->setSpecial(isSpecial);

}
void MainWindow::setNoneChangingButton(ButtonOperator *myButton, int index, QString s1,bool isSpecial){
    setButtonInfo(myButton,index,s1,s1,s1,s1,s1,isSpecial);
}
QTextEdit *MainWindow::getTextEdit()
{
    return textEdit;
}

MainWindow::~MainWindow()
{
    delete ui;
}



