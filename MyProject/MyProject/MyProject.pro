TEMPLATE = subdirs

SUBDIRS += $$PWD/MyGUIApplication \
           $$PWD/MyCLIApplication \
           $$PWD/MySharedLib

QMAKE_CXXFLAGS += -std=gnu++14
