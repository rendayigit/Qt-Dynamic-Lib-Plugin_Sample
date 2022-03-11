#include <QtCore/QDebug>
#include "plugin1.h"

void Plugin::doSomething(QString str) const
{
    qDebug()<< "plugin1: " << str;
}

