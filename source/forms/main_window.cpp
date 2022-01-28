#include "forms/main_window.hpp"
#include "forms/storage_widget.hpp"

#include "ui_main_window.h"

main_window::main_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_window)
{
    ui->setupUi(this);
    ui->main_grid->addWidget(new storage_widget(), 0, 0, 1, 1);
}

main_window::~main_window()
{
    delete ui;
}
