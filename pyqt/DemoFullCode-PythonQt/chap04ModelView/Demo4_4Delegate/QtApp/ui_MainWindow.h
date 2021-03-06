/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actOpen;
    QAction *actSave;
    QAction *actAppend;
    QAction *actInsert;
    QAction *actDelete;
    QAction *actExit;
    QAction *actModelData;
    QAction *actAlignLeft;
    QAction *actAlignCenter;
    QAction *actAlignRight;
    QAction *actFontBold;
    QWidget *centralWidget;
    QSplitter *splitter;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QTableView *tableView;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(753, 403);
        QFont font;
        font.setPointSize(10);
        MainWindow->setFont(font);
        actOpen = new QAction(MainWindow);
        actOpen->setObjectName(QStringLiteral("actOpen"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/images/open.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actOpen->setIcon(icon);
        actSave = new QAction(MainWindow);
        actSave->setObjectName(QStringLiteral("actSave"));
        actSave->setEnabled(false);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/images/save.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actSave->setIcon(icon1);
        actAppend = new QAction(MainWindow);
        actAppend->setObjectName(QStringLiteral("actAppend"));
        actAppend->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/icons/images/append.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAppend->setIcon(icon2);
        actInsert = new QAction(MainWindow);
        actInsert->setObjectName(QStringLiteral("actInsert"));
        actInsert->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/icons/images/306.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actInsert->setIcon(icon3);
        actDelete = new QAction(MainWindow);
        actDelete->setObjectName(QStringLiteral("actDelete"));
        actDelete->setEnabled(false);
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/icons/images/delete.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actDelete->setIcon(icon4);
        actExit = new QAction(MainWindow);
        actExit->setObjectName(QStringLiteral("actExit"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/icons/images/132.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actExit->setIcon(icon5);
        actModelData = new QAction(MainWindow);
        actModelData->setObjectName(QStringLiteral("actModelData"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/icons/images/export1.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actModelData->setIcon(icon6);
        actAlignLeft = new QAction(MainWindow);
        actAlignLeft->setObjectName(QStringLiteral("actAlignLeft"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/icons/images/508.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignLeft->setIcon(icon7);
        actAlignCenter = new QAction(MainWindow);
        actAlignCenter->setObjectName(QStringLiteral("actAlignCenter"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/icons/images/510.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignCenter->setIcon(icon8);
        actAlignRight = new QAction(MainWindow);
        actAlignRight->setObjectName(QStringLiteral("actAlignRight"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/icons/images/512.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actAlignRight->setIcon(icon9);
        actFontBold = new QAction(MainWindow);
        actFontBold->setObjectName(QStringLiteral("actFontBold"));
        actFontBold->setCheckable(true);
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/icons/images/500.bmp"), QSize(), QIcon::Normal, QIcon::Off);
        actFontBold->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        splitter = new QSplitter(centralWidget);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(100, 40, 532, 261));
        splitter->setOrientation(Qt::Horizontal);
        groupBox = new QGroupBox(splitter);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(4, 4, 4, 4);
        tableView = new QTableView(groupBox);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed|QAbstractItemView::SelectedClicked);
        tableView->setAlternatingRowColors(true);

        verticalLayout->addWidget(tableView);

        splitter->addWidget(groupBox);
        groupBox_2 = new QGroupBox(splitter);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(4, 4, 4, 4);
        plainTextEdit = new QPlainTextEdit(groupBox_2);
        plainTextEdit->setObjectName(QStringLiteral("plainTextEdit"));
        plainTextEdit->setLineWrapMode(QPlainTextEdit::NoWrap);

        verticalLayout_2->addWidget(plainTextEdit);

        splitter->addWidget(groupBox_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 753, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mainToolBar->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        mainToolBar->addAction(actOpen);
        mainToolBar->addAction(actSave);
        mainToolBar->addAction(actModelData);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actAppend);
        mainToolBar->addAction(actInsert);
        mainToolBar->addAction(actDelete);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actAlignLeft);
        mainToolBar->addAction(actAlignCenter);
        mainToolBar->addAction(actAlignRight);
        mainToolBar->addAction(actFontBold);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actExit);

        retranslateUi(MainWindow);
        QObject::connect(actExit, SIGNAL(triggered()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Demo4_3, QTableView\344\270\216QStandardItemModel", nullptr));
        actOpen->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actOpen->setToolTip(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        actSave->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\346\226\207\344\273\266", nullptr));
#ifndef QT_NO_TOOLTIP
        actSave->setToolTip(QApplication::translate("MainWindow", "\350\241\250\346\240\274\345\206\205\345\256\271\345\217\246\345\255\230\344\270\272\346\226\207\344\273\266", nullptr));
#endif // QT_NO_TOOLTIP
        actAppend->setText(QApplication::translate("MainWindow", "\346\267\273\345\212\240\350\241\214", nullptr));
#ifndef QT_NO_TOOLTIP
        actAppend->setToolTip(QApplication::translate("MainWindow", "\346\267\273\345\212\240\344\270\200\350\241\214", nullptr));
#endif // QT_NO_TOOLTIP
        actInsert->setText(QApplication::translate("MainWindow", "\346\217\222\345\205\245\350\241\214", nullptr));
#ifndef QT_NO_TOOLTIP
        actInsert->setToolTip(QApplication::translate("MainWindow", "\346\217\222\345\205\245\344\270\200\350\241\214", nullptr));
#endif // QT_NO_TOOLTIP
        actDelete->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\350\241\214", nullptr));
#ifndef QT_NO_TOOLTIP
        actDelete->setToolTip(QApplication::translate("MainWindow", "\345\210\240\351\231\244\345\275\223\345\211\215\350\241\214", nullptr));
#endif // QT_NO_TOOLTIP
        actExit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#ifndef QT_NO_TOOLTIP
        actExit->setToolTip(QApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
#endif // QT_NO_TOOLTIP
        actModelData->setText(QApplication::translate("MainWindow", "\346\250\241\345\236\213\346\225\260\346\215\256", nullptr));
#ifndef QT_NO_TOOLTIP
        actModelData->setToolTip(QApplication::translate("MainWindow", "\346\250\241\345\236\213\346\225\260\346\215\256\346\230\276\347\244\272\345\210\260\346\226\207\346\234\254\346\241\206\351\207\214", nullptr));
#endif // QT_NO_TOOLTIP
        actAlignLeft->setText(QApplication::translate("MainWindow", "\345\261\205\345\267\246", nullptr));
#ifndef QT_NO_TOOLTIP
        actAlignLeft->setToolTip(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\267\246\345\257\271\351\275\220", nullptr));
#endif // QT_NO_TOOLTIP
        actAlignCenter->setText(QApplication::translate("MainWindow", "\345\261\205\344\270\255", nullptr));
#ifndef QT_NO_TOOLTIP
        actAlignCenter->setToolTip(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\261\205\344\270\255", nullptr));
#endif // QT_NO_TOOLTIP
        actAlignRight->setText(QApplication::translate("MainWindow", "\345\261\205\345\217\263", nullptr));
#ifndef QT_NO_TOOLTIP
        actAlignRight->setToolTip(QApplication::translate("MainWindow", "\346\226\207\345\255\227\345\217\263\345\257\271\351\275\220", nullptr));
#endif // QT_NO_TOOLTIP
        actFontBold->setText(QApplication::translate("MainWindow", "\347\262\227\344\275\223", nullptr));
#ifndef QT_NO_TOOLTIP
        actFontBold->setToolTip(QApplication::translate("MainWindow", "\347\262\227\344\275\223\345\255\227\344\275\223", nullptr));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("MainWindow", "tableView", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "plainTextEdit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
