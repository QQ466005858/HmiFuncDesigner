#include "ModbusRtuSlave.h"
#include "../../HmiRunTimeData/Vendor.h"

ModbusRtuSlave::ModbusRtuSlave()
{

}


ModbusRtuSlave::~ModbusRtuSlave()
{

}


/**
 * @brief ModbusRtuSlave::initailizeDevice
 * @details 初始化设备
 * @param pObj 设备描述对象
 * @return false-失败, true-成功
 */
bool ModbusRtuSlave::initailizeDevice(void* pObj)
{
    Vendor* pVendorObj = (Vendor*)(pObj);
    if(pVendorObj) {
        m_modbusRtuSlaveImplObj.insertBlockReadTagToReadList(pVendorObj->m_readList);
        qDebug()<<"ModbusRtuSlave::initailizeDevice";
    }
    return true;
}


/**
 * @brief ModbusRtuSlave::connectDevice
 * @details 连接设备
 * @param pObj 设备描述对象
 * @return false-失败, true-成功
 */
bool ModbusRtuSlave::connectDevice(void* pObj)
{
    (void)pObj;
    qDebug()<<"ModbusRtuSlave::connectDevice";
    return true;
}


/**
 * @brief ModbusRtuSlave::disconnectDevice
 * @details 断开设备连接
 * @param pObj 设备描述对象
 * @return false-失败, true-成功
 */
bool ModbusRtuSlave::disconnectDevice(void* pObj)
{
    (void)pObj;
    qDebug()<<"ModbusRtuSlave::disconnectDevice";
    return true;
}


/**
 * @brief ModbusRtuSlave::unInitailizeDevice
 * @details 反初始化设备
 * @param pObj 设备描述对象
 * @return false-失败, true-成功
 */
bool ModbusRtuSlave::unInitailizeDevice(void* pObj)
{
    (void)pObj;
    qDebug()<<"ModbusRtuSlave::unInitailizeDevice";
    return true;
}


/**
 * @brief ModbusRtuSlave::beforeWriteIOTag
 * @details 写变量前处理
 * @param pObj 设备描述对象
 * @param pTag 变量描述对象
 * @return false-失败, true-成功
 */
bool ModbusRtuSlave::beforeWriteIOTag(void* pObj, IOTag* pTag)
{
    (void)pObj;
    (void)pTag;
    qDebug()<<"ModbusRtuSlave::beforeWriteIOTag";
    return true;
}


/**
 * @brief ModbusRtuSlave::writeIOTag
 * @details 写变量
 * @param pObj 设备描述对象
 * @param pPort 端口操作接口
 * @param pTag 变量描述对象
 * @return 0-失败, 1-成功
 */
int ModbusRtuSlave::writeIOTag(void* pObj, IPort *pPort, IOTag* pTag)
{
    qDebug()<<"ModbusRtuSlave::writeIOTag";
    m_modbusRtuSlaveImplObj.setPort(pPort);
    if(!m_modbusRtuSlaveImplObj.isCanWrite(pObj, pTag)) return 1;
    return m_modbusRtuSlaveImplObj.writeData(pObj, pTag);
}


/**
 * @brief ModbusRtuSlave::afterWriteIOTag
 * @details 写变量后处理
 * @param pObj 设备描述对象
 * @param pTag 变量描述对象
 * @return false-失败, true-成功
 */
bool ModbusRtuSlave::afterWriteIOTag(void* pObj, IOTag* pTag)
{
    (void)pObj;
    (void)pTag;
    qDebug()<<"ModbusRtuSlave::afterWriteIOTag";
    return true;
}



/**
 * @brief ModbusRTU::beforeReadIOTag
 * @details 读变量前处理
 * @param pObj 设备描述对象
 * @param pTag 变量描述对象
 * @return false-失败, true-成功
 */
bool ModbusRtuSlave::beforeReadIOTag(void* pObj, IOTag* pTag)
{
    (void)pObj;
    (void)pTag;
    qDebug()<<"ModbusRtuSlave::beforeReadIOTag";
    return true;
}


/**
 * @brief ModbusRtuSlave::readIOTag
 * @details 读变量
 * @param pObj 设备描述对象
 * @param pPort 端口操作接口
 * @param pTag 变量描述对象
 * @return 0-失败, 1-成功
 */
int ModbusRtuSlave::readIOTag(void* pObj, IPort *pPort, IOTag* pTag)
{
    qDebug()<<"ModbusRtuSlave::readIOTag"<<pTag->GetTagID();
    m_modbusRtuSlaveImplObj.setPort(pPort);
    if(!m_modbusRtuSlaveImplObj.isCanRead(pObj, pTag)) return 1;

    return  1;
    //return m_modbusRtuSlaveImplObj.readData(pObj, pTag);
}


/**
 * @brief ModbusRTU::afterReadIOTag
 * @details 读变量后处理
 * @param pObj 设备描述对象
 * @param pTag 变量描述对象
 * @return false-失败, true-成功
 */
bool ModbusRtuSlave::afterReadIOTag(void* pObj, IOTag* pTag)
{
    qDebug()<<"ModbusRtuSlave::afterReadIOTag";
    (void)pObj;
    (void)pTag;
    return true;
}


///
/// \brief ModbusRTU::convertIOTagBytesToNativeBytes
/// \details 变量字节序转换为当前主机字节序
/// \param pObj 设备描述对象
/// \param pTag 变量描述对象
/// \return true-成功, false-失败
///
bool ModbusRtuSlave::convertIOTagBytesToNativeBytes(void* pObj, IOTag* pTag)
{
    qDebug()<<"ModbusRtuSlave::convertIOTagBytesToNativeBytes";
    return m_modbusRtuSlaveImplObj.convertIOTagBytesToNativeBytes(pObj, pTag);
}





