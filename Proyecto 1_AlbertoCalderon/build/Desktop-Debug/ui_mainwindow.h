/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *txtTitulo;
    QLabel *textNumProcesos;
    QSlider *sliderNumProcesos;
    QLabel *numProcesos;
    QPushButton *btnSimular;
    QComboBox *AlgorithmSelect;
    QLabel *txtAlgoritmo;
    QLabel *txtResultados;
    QLabel *txtEspera;
    QLabel *txtEsperaAvg;
    QLabel *txtEsperaMin;
    QLabel *txtEsperaMax;
    QLabel *txtRespuesta;
    QLabel *txtRespuestaMax;
    QLabel *txtRespuestaAvg;
    QLabel *txtRespuestaMin;
    QLabel *txtTiempoTotal;
    QLabel *txtInactivo;
    QLabel *txtEjecutando;
    QTabWidget *tabWidget;
    QWidget *tab;
    QWidget *tab_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1313, 699);
        MainWindow->setMinimumSize(QSize(1313, 0));
        QFont font;
        font.setPointSize(20);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgb(94, 92, 100);"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        txtTitulo = new QLabel(centralwidget);
        txtTitulo->setObjectName("txtTitulo");
        txtTitulo->setGeometry(QRect(480, 20, 488, 33));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ubuntu Sans")});
        font1.setPointSize(20);
        font1.setWeight(QFont::DemiBold);
        font1.setItalic(false);
        txtTitulo->setFont(font1);
        txtTitulo->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255)"));
        textNumProcesos = new QLabel(centralwidget);
        textNumProcesos->setObjectName("textNumProcesos");
        textNumProcesos->setGeometry(QRect(480, 100, 231, 51));
        QFont font2;
        font2.setPointSize(11);
        textNumProcesos->setFont(font2);
        textNumProcesos->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        sliderNumProcesos = new QSlider(centralwidget);
        sliderNumProcesos->setObjectName("sliderNumProcesos");
        sliderNumProcesos->setGeometry(QRect(480, 170, 231, 16));
        sliderNumProcesos->setOrientation(Qt::Orientation::Horizontal);
        numProcesos = new QLabel(centralwidget);
        numProcesos->setObjectName("numProcesos");
        numProcesos->setGeometry(QRect(730, 110, 51, 41));
        numProcesos->setFont(font2);
        numProcesos->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        btnSimular = new QPushButton(centralwidget);
        btnSimular->setObjectName("btnSimular");
        btnSimular->setGeometry(QRect(960, 550, 251, 61));
        btnSimular->setFont(font2);
        btnSimular->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 255);\n"
"color: rgb(255,255,255);\n"
""));
        AlgorithmSelect = new QComboBox(centralwidget);
        AlgorithmSelect->addItem(QString());
        AlgorithmSelect->addItem(QString());
        AlgorithmSelect->addItem(QString());
        AlgorithmSelect->addItem(QString());
        AlgorithmSelect->addItem(QString());
        AlgorithmSelect->addItem(QString());
        AlgorithmSelect->addItem(QString());
        AlgorithmSelect->setObjectName("AlgorithmSelect");
        AlgorithmSelect->setGeometry(QRect(20, 130, 363, 26));
        AlgorithmSelect->setFont(font2);
        AlgorithmSelect->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtAlgoritmo = new QLabel(centralwidget);
        txtAlgoritmo->setObjectName("txtAlgoritmo");
        txtAlgoritmo->setGeometry(QRect(20, 80, 171, 31));
        txtAlgoritmo->setFont(font2);
        txtAlgoritmo->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtResultados = new QLabel(centralwidget);
        txtResultados->setObjectName("txtResultados");
        txtResultados->setGeometry(QRect(990, 100, 161, 41));
        QFont font3;
        font3.setPointSize(16);
        txtResultados->setFont(font3);
        txtResultados->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtEspera = new QLabel(centralwidget);
        txtEspera->setObjectName("txtEspera");
        txtEspera->setGeometry(QRect(880, 170, 131, 18));
        txtEspera->setFont(font2);
        txtEspera->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtEsperaAvg = new QLabel(centralwidget);
        txtEsperaAvg->setObjectName("txtEsperaAvg");
        txtEsperaAvg->setGeometry(QRect(880, 250, 181, 18));
        txtEsperaAvg->setFont(font2);
        txtEsperaAvg->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtEsperaMin = new QLabel(centralwidget);
        txtEsperaMin->setObjectName("txtEsperaMin");
        txtEsperaMin->setGeometry(QRect(880, 210, 161, 18));
        txtEsperaMin->setFont(font2);
        txtEsperaMin->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtEsperaMax = new QLabel(centralwidget);
        txtEsperaMax->setObjectName("txtEsperaMax");
        txtEsperaMax->setGeometry(QRect(880, 290, 181, 18));
        txtEsperaMax->setFont(font2);
        txtEsperaMax->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtRespuesta = new QLabel(centralwidget);
        txtRespuesta->setObjectName("txtRespuesta");
        txtRespuesta->setGeometry(QRect(1120, 170, 156, 18));
        txtRespuesta->setFont(font2);
        txtRespuesta->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtRespuestaMax = new QLabel(centralwidget);
        txtRespuestaMax->setObjectName("txtRespuestaMax");
        txtRespuestaMax->setGeometry(QRect(1120, 290, 181, 18));
        txtRespuestaMax->setFont(font2);
        txtRespuestaMax->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtRespuestaAvg = new QLabel(centralwidget);
        txtRespuestaAvg->setObjectName("txtRespuestaAvg");
        txtRespuestaAvg->setGeometry(QRect(1120, 250, 191, 18));
        txtRespuestaAvg->setFont(font2);
        txtRespuestaAvg->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtRespuestaMin = new QLabel(centralwidget);
        txtRespuestaMin->setObjectName("txtRespuestaMin");
        txtRespuestaMin->setGeometry(QRect(1120, 210, 161, 18));
        txtRespuestaMin->setFont(font2);
        txtRespuestaMin->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtTiempoTotal = new QLabel(centralwidget);
        txtTiempoTotal->setObjectName("txtTiempoTotal");
        txtTiempoTotal->setGeometry(QRect(1030, 370, 161, 18));
        txtTiempoTotal->setFont(font2);
        txtTiempoTotal->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtInactivo = new QLabel(centralwidget);
        txtInactivo->setObjectName("txtInactivo");
        txtInactivo->setGeometry(QRect(1030, 470, 251, 18));
        txtInactivo->setFont(font2);
        txtInactivo->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        txtEjecutando = new QLabel(centralwidget);
        txtEjecutando->setObjectName("txtEjecutando");
        txtEjecutando->setGeometry(QRect(1000, 420, 301, 18));
        txtEjecutando->setFont(font2);
        txtEjecutando->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName("tabWidget");
        tabWidget->setGeometry(QRect(20, 180, 811, 471));
        tabWidget->setFont(font2);
        tabWidget->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        tab = new QWidget();
        tab->setObjectName("tab");
        tab->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName("tab_2");
        tab_2->setStyleSheet(QString::fromUtf8("Color: rgb(255, 255, 255);"));
        tabWidget->addTab(tab_2, QString());
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        txtTitulo->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:24pt;\">Simulador de Procesos</span></p></body></html>", nullptr));
        textNumProcesos->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">N\303\272mero de Procesos:</span></p></body></html>", nullptr));
        numProcesos->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">5</span></p></body></html>", nullptr));
        btnSimular->setText(QCoreApplication::translate("MainWindow", "Empezar", nullptr));
        AlgorithmSelect->setItemText(0, QCoreApplication::translate("MainWindow", "Primero en llegar primero en ejecutar (FCFS)", nullptr));
        AlgorithmSelect->setItemText(1, QCoreApplication::translate("MainWindow", "Primero el trabajo m\303\241s corto (SJF)", nullptr));
        AlgorithmSelect->setItemText(2, QCoreApplication::translate("MainWindow", "Selecci\303\263n aleatoria", nullptr));
        AlgorithmSelect->setItemText(3, QCoreApplication::translate("MainWindow", "Planificaci\303\263n basada en prioridades (No Expulsivo)", nullptr));
        AlgorithmSelect->setItemText(4, QCoreApplication::translate("MainWindow", "Turno rotativo (round robin)", nullptr));
        AlgorithmSelect->setItemText(5, QCoreApplication::translate("MainWindow", "Primero el menor tiempo restante (SRTF)", nullptr));
        AlgorithmSelect->setItemText(6, QCoreApplication::translate("MainWindow", "Planificaci\303\263n basada en prioridades (Expulsivo)", nullptr));

        txtAlgoritmo->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">Algoritmo</span></p></body></html>", nullptr));
        txtResultados->setText(QCoreApplication::translate("MainWindow", "Resultados", nullptr));
        txtEspera->setText(QCoreApplication::translate("MainWindow", "Tiempo de espera:  ", nullptr));
        txtEsperaAvg->setText(QCoreApplication::translate("MainWindow", "Medio:  0ms", nullptr));
        txtEsperaMin->setText(QCoreApplication::translate("MainWindow", "M\303\255nimo:  0ms", nullptr));
        txtEsperaMax->setText(QCoreApplication::translate("MainWindow", "M\303\241ximo:  0ms", nullptr));
        txtRespuesta->setText(QCoreApplication::translate("MainWindow", "Tiempo de Respuesta:  ", nullptr));
        txtRespuestaMax->setText(QCoreApplication::translate("MainWindow", "M\303\241ximo:  0ms", nullptr));
        txtRespuestaAvg->setText(QCoreApplication::translate("MainWindow", "Medio:  0ms", nullptr));
        txtRespuestaMin->setText(QCoreApplication::translate("MainWindow", "M\303\255nimo:  0ms", nullptr));
        txtTiempoTotal->setText(QCoreApplication::translate("MainWindow", "Tiempo Total:  0ms", nullptr));
        txtInactivo->setText(QCoreApplication::translate("MainWindow", "Inactivo: 0ms [0.0%]", nullptr));
        txtEjecutando->setText(QCoreApplication::translate("MainWindow", "Ejecutando CPU: 0ms [0.0%]", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("MainWindow", "Tab 1", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("MainWindow", "Tab 2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
