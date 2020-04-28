
include(../../HmiRunTimeVendorPlugin.pri)

SOURCES += ModbusRtuSlave.cpp \
    ../../HmiRunTimeData/Tag/IOTag.cpp \
    ../Public/DataPack.cpp \
    ../Public/Modbus.cpp \
    ModbusRtuSlaveImpl.cpp

HEADERS += ModbusRtuSlave.h \
    ../../HmiRunTimeData/Tag/IOTag.h \
    ../Public/DataPack.h \
    ../Public/Modbus.h \
    ModbusRtuSlaveImpl.h
DISTFILES += ModbusRtuSlave.json


