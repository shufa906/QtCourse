#include "mainwindow.h"
#include "ui_mainwindow.h"

// 阶段1：加载 UI 设计器布局，显示计算器窗口
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
