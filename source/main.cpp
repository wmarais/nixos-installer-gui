#include <QApplication>
#include <QLocale>
#include <QTranslator>

#include "forms/main_window.hpp"

int main(int argc, char * argv[])
{
  QApplication a(argc, argv);

  QTranslator translator;
  const QStringList uiLanguages = QLocale::system().uiLanguages();
  for (const QString &locale : uiLanguages)
  {
    const QString baseName = "nixos-installer-gui_" + QLocale(locale).name();
    if (translator.load(":/i18n/" + baseName))
    {
      a.installTranslator(&translator);
      break;
    }
  }

  main_window w;
  w.show();
  return a.exec();
}
