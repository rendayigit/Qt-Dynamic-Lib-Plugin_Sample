#include <QtCore/QDebug>
#include <QtCore/QDirIterator>
#include <QtCore/QPluginLoader>
#include <filesystem>

#include "../dlibs/LibInterface.h"

using std::filesystem::current_path;

QString binPath = QString::fromStdString(current_path().string()) + "/../../bin/";

QList<QString> getDlibs(QString path) {
  QList<QString> libList;

  QDirIterator iterator(path, QDirIterator::Subdirectories);

  while (iterator.hasNext()) {
    QFile file(iterator.next());
    if (file.open(QIODevice::ReadOnly) and
        QLibrary::isLibrary(file.fileName())) {
      libList.append(file.fileName());
    }
  }

  return libList;
}

int main(int argc, char *argv[]) {
  QList<QString> libs = getDlibs(binPath);
  if (libs.isEmpty()) {
    qDebug() << "no libs found at " + binPath;
    return -1;
  }

  for (auto &lib : libs) {
    QPluginLoader loader(lib);
    if (auto instance = loader.instance()) {
      if (auto plugin = qobject_cast<PluginInterface *>(instance)) {
        plugin->doSomething("lib filename: " + lib);
      } else {
        qDebug() << "qobject_cast<> returned nullptr";
      }
    } else {
      qDebug() << loader.errorString();
    }
  }
}