#include "widget.h"

#include <QApplication>
#include <QCalendarWidget>
#include <QVBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QVBoxLayout *layout = new QVBoxLayout(&w);
    QCalendarWidget *cal = new QCalendarWidget(&w);

    layout -> addWidget(cal, 0, Qt::AlignCenter);

    w.show();
    return a.exec();
}
