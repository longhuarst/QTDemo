# -*- coding: utf-8 -*-

# Form implementation generated from reading ui file 'MainWindow.ui'
#
# Created by: PyQt5 UI code generator 5.10.1
#
# WARNING! All changes made in this file will be lost!

from PyQt5 import QtCore, QtGui, QtWidgets

class Ui_MainWindow(object):
    def setupUi(self, MainWindow):
        MainWindow.setObjectName("MainWindow")
        MainWindow.resize(653, 387)
        font = QtGui.QFont()
        font.setPointSize(11)
        MainWindow.setFont(font)
        self.centralWidget = QtWidgets.QWidget(MainWindow)
        self.centralWidget.setObjectName("centralWidget")
        self.tableView = QtWidgets.QTableView(self.centralWidget)
        self.tableView.setGeometry(QtCore.QRect(50, 25, 431, 241))
        self.tableView.setSelectionMode(QtWidgets.QAbstractItemView.SingleSelection)
        self.tableView.setSelectionBehavior(QtWidgets.QAbstractItemView.SelectRows)
        self.tableView.setObjectName("tableView")
        MainWindow.setCentralWidget(self.centralWidget)
        self.menuBar = QtWidgets.QMenuBar(MainWindow)
        self.menuBar.setGeometry(QtCore.QRect(0, 0, 653, 23))
        self.menuBar.setObjectName("menuBar")
        MainWindow.setMenuBar(self.menuBar)
        self.statusBar = QtWidgets.QStatusBar(MainWindow)
        self.statusBar.setObjectName("statusBar")
        MainWindow.setStatusBar(self.statusBar)
        self.mainToolBar = QtWidgets.QToolBar(MainWindow)
        self.mainToolBar.setToolButtonStyle(QtCore.Qt.ToolButtonTextUnderIcon)
        self.mainToolBar.setObjectName("mainToolBar")
        MainWindow.addToolBar(QtCore.Qt.TopToolBarArea, self.mainToolBar)
        self.actOpenDB = QtWidgets.QAction(MainWindow)
        icon = QtGui.QIcon()
        icon.addPixmap(QtGui.QPixmap(":/icons/images/open3.bmp"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actOpenDB.setIcon(icon)
        self.actOpenDB.setObjectName("actOpenDB")
        self.actQuit = QtWidgets.QAction(MainWindow)
        icon1 = QtGui.QIcon()
        icon1.addPixmap(QtGui.QPixmap(":/icons/images/exit.bmp"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actQuit.setIcon(icon1)
        self.actQuit.setObjectName("actQuit")
        self.actRecInsert = QtWidgets.QAction(MainWindow)
        self.actRecInsert.setEnabled(False)
        icon2 = QtGui.QIcon()
        icon2.addPixmap(QtGui.QPixmap(":/icons/images/306.bmp"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actRecInsert.setIcon(icon2)
        self.actRecInsert.setObjectName("actRecInsert")
        self.actRecDelete = QtWidgets.QAction(MainWindow)
        self.actRecDelete.setEnabled(False)
        icon3 = QtGui.QIcon()
        icon3.addPixmap(QtGui.QPixmap(":/icons/images/delete1.bmp"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actRecDelete.setIcon(icon3)
        self.actRecDelete.setObjectName("actRecDelete")
        self.actRecEdit = QtWidgets.QAction(MainWindow)
        self.actRecEdit.setEnabled(False)
        icon4 = QtGui.QIcon()
        icon4.addPixmap(QtGui.QPixmap(":/icons/images/812.bmp"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actRecEdit.setIcon(icon4)
        self.actRecEdit.setObjectName("actRecEdit")
        self.actScan = QtWidgets.QAction(MainWindow)
        self.actScan.setEnabled(False)
        icon5 = QtGui.QIcon()
        icon5.addPixmap(QtGui.QPixmap(":/icons/images/up.bmp"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actScan.setIcon(icon5)
        self.actScan.setObjectName("actScan")
        self.actTestSQL = QtWidgets.QAction(MainWindow)
        self.actTestSQL.setEnabled(False)
        icon6 = QtGui.QIcon()
        icon6.addPixmap(QtGui.QPixmap(":/icons/images/828.bmp"), QtGui.QIcon.Normal, QtGui.QIcon.Off)
        self.actTestSQL.setIcon(icon6)
        self.actTestSQL.setObjectName("actTestSQL")
        self.mainToolBar.addAction(self.actOpenDB)
        self.mainToolBar.addSeparator()
        self.mainToolBar.addAction(self.actRecInsert)
        self.mainToolBar.addAction(self.actRecEdit)
        self.mainToolBar.addAction(self.actRecDelete)
        self.mainToolBar.addAction(self.actScan)
        self.mainToolBar.addSeparator()
        self.mainToolBar.addAction(self.actTestSQL)
        self.mainToolBar.addAction(self.actQuit)

        self.retranslateUi(MainWindow)
        self.actQuit.triggered.connect(MainWindow.close)
        QtCore.QMetaObject.connectSlotsByName(MainWindow)

    def retranslateUi(self, MainWindow):
        _translate = QtCore.QCoreApplication.translate
        MainWindow.setWindowTitle(_translate("MainWindow", "Demo7_3, QSqlQuery的使用"))
        self.actOpenDB.setText(_translate("MainWindow", "打开数据库"))
        self.actOpenDB.setToolTip(_translate("MainWindow", "打开数据库"))
        self.actQuit.setText(_translate("MainWindow", "退出"))
        self.actQuit.setToolTip(_translate("MainWindow", "退出"))
        self.actRecInsert.setText(_translate("MainWindow", "插入记录"))
        self.actRecInsert.setToolTip(_translate("MainWindow", "插入记录"))
        self.actRecDelete.setText(_translate("MainWindow", "删除记录"))
        self.actRecDelete.setToolTip(_translate("MainWindow", "删除记录"))
        self.actRecEdit.setText(_translate("MainWindow", "编辑记录"))
        self.actRecEdit.setToolTip(_translate("MainWindow", "编辑记录"))
        self.actScan.setText(_translate("MainWindow", "涨工资"))
        self.actScan.setToolTip(_translate("MainWindow", "涨工资"))
        self.actTestSQL.setText(_translate("MainWindow", "SQL测试"))
        self.actTestSQL.setToolTip(_translate("MainWindow", "SQL语句测试"))

import res_rc
