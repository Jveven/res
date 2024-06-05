#include "widget.h"
#include "ui_widget.h"
#include<QFont>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setMinimumSize(480,320);  //界面窗口最小
    this->setMaximumSize(480,320);  //界面窗口最大
    this->setWindowTitle("OO");     //设置界面名称
    this->setWindowFlags(Qt::SplashScreen|Qt::WindowStaysOnTopHint|Qt::FramelessWindowHint);
    QPixmap pixmap=QPixmap(":/images/test.jpg").scaled(this->size(),
                        Qt::IgnoreAspectRatio,
                        Qt::SmoothTransformation);      //平滑缩放到界面大小一致
    palette.setBrush(QPalette::Window, QBrush(pixmap)); //设置背景
    this->setPalette(palette);

    btn1 = new QPushButton("登录",this); //设置登录按钮
    btn1->setGeometry(175,265,140,30); //按钮摆放位置
    btn1->setStyleSheet("QPushButton{background-color:#63B8FF;}"); //按键颜色设置为蓝色

    le1 = new QLineEdit(this); //new一个输入行
    le1->setClearButtonEnabled(true); //设置清除按钮
    le1->setGeometry(143,135,245,28);

    le2 = new QLineEdit(this);
    le2->setClearButtonEnabled(true);   //带有清除按钮
    le2->setEchoMode(QLineEdit::Password); //设置密码模式
    le2->setGeometry(143,170,245,28);

    lb1=new QLabel(this);
    lb1->setText("账号"); //设置显示文字
    QFont labelFont("新宋体",14,QFont::Normal);    //设置字体为新宋体，字号14，正常字体
    lb1->setFont(labelFont); //文字设置字体格式
    lb1->setGeometry(90,137,60,20);

    lb2=new QLabel(this);
    lb2->setText("密码"); //设置显示文字
    //设置字体为新宋体，字号14，正常字体
    lb2->setFont(labelFont); //文字设置字体格式
    lb2->setGeometry(90,175,60,20);

    cb1=new QCheckBox(this);
    cb1->setText("自动登录");
    cb1->setGeometry(97,208,90,20);

    cb2=new QCheckBox(this);
    cb2->setText("记住密码");
    cb2->setGeometry(202,208,90,20);

    btn2=new QPushButton("忘记密码",this);
    btn2->setGeometry(307,208,80,20);

    btn3=new QPushButton("X",this);
    btn3->setGeometry(460,0,20,20);
    connect(btn3,&QPushButton::clicked,this,this->close);

    /*
    hb1=new QHBoxLayout; //水平布局
    hb1->addWidget(lb1);  //添加lb
    hb1->addWidget(le1);  //添加输入行

    hb2=new QHBoxLayout; //水平布局
    hb2->addWidget(lb2);  //添加lb
    hb2->addWidget(le2);  //添加输入行

    //this->setLayout(hb1); //在ui中显示
    //this->setLayout(hb2); //在ui中显示

    gl=new QGridLayout;
    gl->addWidget(lb1,0,0);
    gl->addWidget(le1,0,1);
    gl->addWidget(lb2,1,0);
    gl->addWidget(le2,1,1);
    //this->setLayout(gl);
    */

}

Widget::~Widget()
{
    delete ui;
}


