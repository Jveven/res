#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include<QPushButton>
#include<QLabel>
#include<QLineEdit>
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QGridLayout>
#include<QCheckBox>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private:
    Ui::Widget *ui;

    QPalette palette;
    QPushButton *btn1;
    QPushButton *btn2;
    QLineEdit *le1;
    QLabel *lb1;
    QLineEdit *le2;
    QLabel *lb2;
    QHBoxLayout *hb1;
    QHBoxLayout *hb2;
    QVBoxLayout *vb1;
    QGridLayout *gl;
    QCheckBox *cb1;
    QCheckBox *cb2;
    QPushButton *btn3;
};
#endif // WIDGET_H
