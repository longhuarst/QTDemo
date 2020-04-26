#include "mainwindow.h"
#include "ui_mainwindow.h"


#include <QFile>
#include <QDir>
#include <QFileDialog>
#include <QTextStream>

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

    //QIODevice::OpenModeFlag
    //  QIODevice::ReadOnly
    //  QIODevice::WriteOnly
    //  QIODevice::ReadWrite
    //  QIODevice::Append       添加模式打开， 新写入的内容会被追加到原来末尾。
    //  QIODevice::Truncate     以截取方式打开文件，文档原有的内容会被全部删除。
    //  QIODevice::Text         以文本方式打开     \n会被自动翻译为换行符， 写入时会自动翻译为对应平台的编码
    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return false;
    }

    ui->textEdit->setPlainText(aFile.readAll());
    aFile.close();  //关闭文件

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





bool MainWindow::saveTextByIODevice(const QString &aFileName)
{
    //用IODevice方式保存文本文件
    QFile aFile(aFileName);


    //QIODevice::OpenModeFlag
    //  QIODevice::ReadOnly
    //  QIODevice::WriteOnly
    //  QIODevice::ReadWrite
    //  QIODevice::Append       添加模式打开， 新写入的内容会被追加到原来末尾。
    //  QIODevice::Truncate     以截取方式打开文件，文档原有的内容会被全部删除。
    //  QIODevice::Text         以文本方式打开     \n会被自动翻译为换行符， 写入时会自动翻译为对应平台的编码
    if (!aFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        return false;
    }

    QString str = ui->textEdit->toPlainText();//整个内容作为字符串
    QByteArray strBytes = str.toUtf8();//转换为字节数组
    aFile.write(strBytes, strBytes.length());//写入文件
    aFile.close();  //关闭文件

    return true;

}


//文件另存为
void MainWindow::on_pushButtonOpenFileSaveAs_clicked()
{
    //打开文件
    QString curPath = QDir::currentPath();

    QString aFileName = QFileDialog::getSaveFileName(this,
                                                     "另存为一个文件",
                                                     curPath,
                                                     "程序文件(*.h *.cpp);;文本文件(*.txt);;所有文件(*.*)");
    if (aFileName.isEmpty())
        return;

   saveTextByIODevice(aFileName);
}



bool MainWindow::openTextByStream(const QString &aFileName)
{

    //用QTextStream 打开文件
    QFile aFile(aFileName);

    if (!aFile.exists()){
        //文件不存在
        return false;
    }

    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return false;
    }

    QTextStream aStream(&aFile);//用文本流读取文件
    aStream.setAutoDetectUnicode(true); //自动监测Unicode，才能显示汉字
    ui->textEdit->setPlainText(aStream.readAll());
    aFile.close();//关闭文件
    return true;
}



bool MainWindow::openTextByStreamReadLine(const QString &aFileName)
{
    //用QTextStream 打开文件
    QFile aFile(aFileName);

    if (!aFile.exists()){
        //文件不存在
        return false;
    }

    if (!aFile.open(QIODevice::ReadOnly | QIODevice::Text)){
        return false;
    }

    QTextStream aStream(&aFile);//用文本流读取文件
    aStream.setAutoDetectUnicode(true); //自动监测Unicode，才能显示汉字
    ui->textEdit->clear();
    while (!aStream.atEnd()) {
        QString str = aStream.readLine();//读取文件的一行
        ui->textEdit->append(str);
    }
    aFile.close();//关闭文件
    return true;
}



bool MainWindow::saveTextByStream(const QString &aFileName)
{
    QFile aFile(aFileName);


    //QIODevice::OpenModeFlag
    //  QIODevice::ReadOnly
    //  QIODevice::WriteOnly
    //  QIODevice::ReadWrite
    //  QIODevice::Append       添加模式打开， 新写入的内容会被追加到原来末尾。
    //  QIODevice::Truncate     以截取方式打开文件，文档原有的内容会被全部删除。
    //  QIODevice::Text         以文本方式打开     \n会被自动翻译为换行符， 写入时会自动翻译为对应平台的编码
    if (!aFile.open(QIODevice::WriteOnly | QIODevice::Text)){
        return false;
    }

    QTextStream aStream(&aFile);
    aStream.setAutoDetectUnicode(true);
    QString str = ui->textEdit->toPlainText();//整个内容作为字符串
    aStream << str;//写入文件
    aFile.close();  //关闭文件

    return true;

}

void MainWindow::on_pushButtonOpenFileQTextString_clicked()
{

}

void MainWindow::on_pushButtonOpenFileQTextStream_clicked()
{

}














