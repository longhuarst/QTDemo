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

private:
    Ui::MainWindow *ui;


    bool openTextByIODevice(const QString &aFileName);
    bool saveTextByIODevice(const QString &aFileName);
};
#endif // MAINWINDOW_H
