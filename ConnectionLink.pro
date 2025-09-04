QT += widgets network concurrent sql printsupport multimedia multimediawidgets sql

LIBS += -lpdh
TEMPLATE = app
TARGET = ConnectionLink
RC_ICONS = favicon.ico

SOURCES += \
    cpumonitor.cpp \
    main.cpp \
    mainwindow.cpp \
    qcustomplot.cpp \
    snap7.cpp \
    universaldbmanager.cpp

HEADERS += \
    cpumonitor.h \
    mainwindow.h \
    qcustomplot.h \
    snap7.h \
    universaldbmanager.h

FORMS += \
    mainwindow.ui

INCLUDEPATH += path/to/qcustomplot
INCLUDEPATH += $$PWD/snap7/include
LIBS += -L$$PWD/snap7/lib -lsnap7

unix|win32: LIBS += -L$$PWD/./ -lsnap7


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../release/ -lsnap7
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../debug/ -lsnap7
else:unix: LIBS += -L$$PWD/../ -lsnap7

