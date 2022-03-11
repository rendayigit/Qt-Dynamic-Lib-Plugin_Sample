#include <QtCore/QDebug>
#include "plugin3.h"

void Plugin::doSomething(QString str) const
{
    qDebug()<< "plugin3: " << str;
}

