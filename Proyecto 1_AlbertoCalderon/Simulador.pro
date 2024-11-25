QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++20

SOURCES += \
    info.cpp \
    main.cpp \
    mainwindow.cpp \
    simulator.cpp \
    timeslice.cpp

HEADERS += \
    info.h \
    mainwindow.h \
    simulator.h \
    timeslice.h

FORMS += \
    mainwindow.ui

qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
