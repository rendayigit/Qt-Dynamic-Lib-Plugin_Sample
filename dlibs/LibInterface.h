#ifndef LIB_INTERFACE
#define LIB_INTERFACE

#include "PluginInterface.h"

#include <QtCore/QObject>
#include <QtCore/QtPlugin>

class Plugin : public QObject, public PluginInterface {
  Q_OBJECT
  Q_PLUGIN_METADATA(IID PluginInterface_iid)
  Q_INTERFACES(PluginInterface)

public:
  ~Plugin() override {}
  void doSomething(QString) const override;
};
#endif // LIB_INTERFACE
