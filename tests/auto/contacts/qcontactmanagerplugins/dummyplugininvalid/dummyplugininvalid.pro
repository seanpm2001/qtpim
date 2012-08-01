TEMPLATE = lib
CONFIG += plugin testplugin
TARGET = $$qtLibraryTarget(contacts_testdummyinvalid)
PLUGIN_TYPE=contacts

DESTDIR = $$QT.contacts.plugins/contacts
QT += contacts

DEFINES += DUMMYPLUGINTARGET=contacts_testdummyinvalid
DEFINES += DUMMYPLUGINNAME=invalid

SOURCES += ../dummyplugin/dummyplugin.cpp
HEADERS += ../dummyplugin/dummyplugin.h

# Enable installation of plugin in "make install"
target.path += $$[QT_INSTALL_PLUGINS]/contacts
INSTALLS += target
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0
