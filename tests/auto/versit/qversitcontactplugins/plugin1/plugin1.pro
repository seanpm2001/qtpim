TEMPLATE = lib
CONFIG += plugin testplugin
TARGET = $$qtLibraryTarget(versit_plugin1)
PLUGIN_TYPE=versit
QT += contacts versit
DESTDIR = $$QT.versit.plugins/versit
SOURCES += plugin1.cpp
HEADERS += plugin1.h

# Enable installation of plugin in "make install"
target.path += $$[QT_INSTALL_PLUGINS]/versit
INSTALLS += target