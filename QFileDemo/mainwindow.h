#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonOpenFile_clicked();

    void on_pushButtonOpenFileSaveAs_clicked();

    void on_pushButtonOpenFileQTextString_clicked();

    void on_pushButtonOpenFileQTextStream_clicked();

private:
    Ui::MainWindow *ui;


    bool openTextByIODevice(const QString &aFileName);
    bool saveTextByIODevice(const QString &aFileName);
    bool openTextByStream(const QString &aFileName);
    bool openTextByStreamReadLine(const QString &aFileName);
    bool saveTextByStream(const QString &aFileName);
};
#endif // MAINWINDOW_H
