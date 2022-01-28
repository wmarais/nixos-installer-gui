#include "forms/storage_widget.hpp"
#include "ui_storage_widget.h"

storage_widget::storage_widget(QWidget *parent) :
  QWidget(parent),
  ui(new Ui::storage_widget)
{
  ui->setupUi(this);
}

storage_widget::~storage_widget()
{
  delete ui;
}
