#include "widget.h"

#include <QApplication>
#include <QCalendarWidget>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;

    QCalendarWidget cal;

    cal.show();

    w.show();
    return a.exec();
}
