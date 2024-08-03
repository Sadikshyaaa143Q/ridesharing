QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chat.cpp \
    destination.cpp \
    login.cpp \
    login_rider.cpp \
    main.cpp \
    signup.cpp

HEADERS += \
    chat.h \
    destination.h \
    login.h \
    login_rider.h \
    signup.h

FORMS += \
    chat.ui \
    destination.ui \
    login.ui \
    login_rider.ui \
    signup.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
