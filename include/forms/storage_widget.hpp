#pragma once

#include <QWidget>

namespace Ui {
class storage_widget;
}

class storage_widget : public QWidget
{
  Q_OBJECT

public:
  explicit storage_widget(QWidget *parent = nullptr);
  ~storage_widget();

private:
  Ui::storage_widget *ui;
};

