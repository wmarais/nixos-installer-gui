#pragma once

#include <QMainWindow>

namespace Ui {
class main_window;
}

class main_window : public QMainWindow
{
    Q_OBJECT

public:
    explicit main_window(QWidget *parent = nullptr);
    ~main_window();

private:
    Ui::main_window *ui;
};

