#-------------------------------------------------
#
# Project created by QtCreator 2015-04-19T22:01:07
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SprintTaskManager
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    createproject.cpp \
    attachment.cpp \
    task.cpp \
    backlog.cpp \
    iteration.cpp \
    taskcontainer.cpp \
    project.cpp

HEADERS  += mainwindow.h \
    createproject.h \
    attachment.h \
    task.h \
    backlog.h \
    iteration.h \
    taskcontainer.h \
    project.h

FORMS    += mainwindow.ui \
    createproject.ui
