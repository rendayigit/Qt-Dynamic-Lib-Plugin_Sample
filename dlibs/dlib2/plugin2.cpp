#include <QtCore/QDebug>
#include "plugin2.h"

void Plugin::doSomething(QString str) const
{
    qDebug()<< "plugin2: " << str;
}

