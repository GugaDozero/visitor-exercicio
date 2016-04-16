TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
    elementa.cpp \
    elementb.cpp \
    main.cpp \
    togglecasevisitor.cpp

HEADERS += \
    elementa.h \
    elementb.h \
    ielement.h \
    ivisitor.h \
    togglecasevisitor.h
