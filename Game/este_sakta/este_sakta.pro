#-------------------------------------------------
#
# Project created by QtCreator 2013-11-09T13:50:18
#
#-------------------------------------------------

QT       += core gui

TARGET = este_sakta
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    seshim.cpp \
    este_sakta.cpp \
    zhyldam.cpp \
    zhyldam2.cpp \
    dialog_zh1.cpp \
    dialog_zh2.cpp \
    dialog_zh3.cpp \
    zhyldam3.cpp \
    dialog_zh.cpp \
    dialog_sh.cpp \
    dialog_sh1.cpp \
    sheshim2.cpp \
    shewim3.cpp \
    dialog_sh2.cpp \
    dialog_sh3.cpp \
    dialog_es.cpp \
    dialog_es1.cpp \
    este_sakta2.cpp \
    dialog_es2.cpp \
    este_sakta3.cpp \
    dialog_es3.cpp

HEADERS  += mainwindow.h \
    seshim.h \
    este_sakta.h \
    zhyldam.h \
    zhyldam2.h \
    dialog_zh1.h \
    dialog_zh2.h \
    dialog_zh3.h \
    zhyldam3.h \
    dialog_zh.h \
    dialog_sh.h \
    dialog_sh1.h \
    sheshim2.h \
    shewim3.h \
    dialog_sh2.h \
    dialog_sh3.h \
    dialog_es.h \
    dialog_es1.h \
    este_sakta2.h \
    dialog_es2.h \
    este_sakta3.h \
    dialog_es3.h

FORMS    += mainwindow.ui \
    seshim.ui \
    este_sakta.ui \
    zhyldam.ui \
    zhyldam2.ui \
    dialog_zh1.ui \
    dialog_zh2.ui \
    dialog_zh3.ui \
    zhyldam3.ui \
    dialog_zh.ui \
    dialog_sh.ui \
    dialog_sh1.ui \
    sheshim2.ui \
    shewim3.ui \
    dialog_sh2.ui \
    dialog_sh3.ui \
    dialog_es.ui \
    dialog_es1.ui \
    este_sakta2.ui \
    dialog_es2.ui \
    este_sakta3.ui \
    dialog_es3.ui

CONFIG += mobility
MOBILITY = 

symbian {
    TARGET.UID3 = 0xe418eb5f
    # TARGET.CAPABILITY += 
    TARGET.EPOCSTACKSIZE = 0x14000
    TARGET.EPOCHEAPSIZE = 0x020000 0x800000
}

RESOURCES += \
    images.qrc
