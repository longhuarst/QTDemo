#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QFile>
#include <QDir>
#include <QFileDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}




bool MainWindow::openTextByIODevice(const QString &aFileName)
{
    //用IODevice方式打开文本文件
    QFile aFile(aFileName);
    if (!aFile.exists()){
        //文件不存在
        return false;
    }

    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return false;
    }

    ui->textEdit->setPlainText(aFile.readAll());
    aFile.close();

    return true;

}

void MainWindow::on_pushButtonOpenFile_clicked()
{
    //打开文件
    QString curPath = QDir::currentPath();

    QString aFileName = QFileDialog::getOpenFileName(this,
                                                     "打开一个文件",
                                                     curPath,
                                                     "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)");
    if (aFileName.isEmpty())
        return;

   openTextByIODevice(aFileName);

}













