#-------------------------------------------------
#
# Project created by QtCreator 2017-11-17T09:27:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ctrl_machine
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    masterwindow.cpp \
    frmsysmenu.cpp \
    frmbottommenu.cpp \
    frmconfigdevice.cpp \
    devgraphicsview.cpp \
    frmhome.cpp \
    frmparameterssetting.cpp \
    frmequipment.cpp \
    treebuttonitem.cpp

HEADERS += \
    masterwindow.h \
    frmsysmenu.h \
    frmbottommenu.h \
    frmconfigdevice.h \
    devgraphicsview.h \
    config.h \
    frmhome.h \
    frmparameterssetting.h \
    frmequipment.h \
    treebuttonitem.h

FORMS += \
    masterwindow.ui \
    frmsysmenu.ui \
    frmbottommenu.ui \
    frmconfigdevice.ui \
    frmhome.ui \
    frmparameterssetting.ui \
    frmequipment.ui \
    treebuttonitem.ui

RESOURCES += \
    resouce.qrc
