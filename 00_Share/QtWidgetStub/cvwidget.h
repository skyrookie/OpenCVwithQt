#ifndef CVWIDGET_H
#define CVWIDGET_H

#include <QWidget>

class CvWidget : public QWidget
{
    Q_OBJECT

public:
    CvWidget(QWidget *parent = 0);
    ~CvWidget();
};

#endif // CVWIDGET_H
