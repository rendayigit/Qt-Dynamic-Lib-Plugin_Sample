#include <QtCore/QDebug>
#include "../LibInterface.h"

void Plugin::doSomething(QString str) const
{
    qDebug()<< "plugin1: " << str;
}
