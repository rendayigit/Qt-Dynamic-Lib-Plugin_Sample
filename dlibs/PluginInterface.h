#ifndef PLUGIN_INTERFACE
#define PLUGIN_INTERFACE

#include <QtCore/QtPlugin>

class PluginInterface {
public:
  virtual ~PluginInterface() {}
  virtual void doSomething(QString) const = 0;
};

#define PluginInterface_iid "whatever.you.want.PluginInterface"
Q_DECLARE_INTERFACE(PluginInterface, PluginInterface_iid)

#endif // PLUGIN_INTERFACE
