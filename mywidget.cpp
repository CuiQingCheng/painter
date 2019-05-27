#include "mywidget.h"
#include "ui_mywidget.h"
#include <QPen>
#include <QBrush>
#include <QFont>
#include <QDebug>

MyWidget::MyWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MyWidget)
{
    ui->setupUi(this);
}

MyWidget::~MyWidget()
{
    delete ui;
}

void MyWidget::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
//    painter.drawLine(QPointF(0,0), QPointF(80, 100));

//    QPen pen;
//    pen.setColor(QColor(255, 0, 0));

//    QBrush brush(QColor(0, 250, 0, 125));

//    painter.setPen(pen);
//    painter.setBrush(brush);

//    painter.drawRect(150, 150, 200, 200);

//    QFont font("宋体", 15, QFont::Bold, true);

//    font.setLetterSpacing(QFont::AbsoluteSpacing, 10);

//    painter.setFont(font);
//    painter.setPen(Qt::blue);
//    painter.drawText(120, 80, tr("hhhhhhhhh"));
    qDebug() << "11111111111111";
    QPainterPath Path;
    Path.addEllipse(100, 100, 50, 50);
    Path.lineTo(200, 200);

    painter.setPen(Qt::blue);
    painter.setBrush(Qt::red);

    painter.drawPath(Path);

    painter.translate(200, 200);
    painter.drawRect(0,0, 50,50);
}
