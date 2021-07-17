#include "serialport.h"

SerialPort::SerialPort()
{
    port = new QSerialPort();
}

SerialPort::~SerialPort()
{
    delete  port;
}

int SerialPort::getBaudRate() const
{
    return baudRate;
}

void SerialPort::setBaudRate(int value)
{
    baudRate = value;
    port->setBaudRate(value);
}

std::string SerialPort::getPortName() const
{
    return portName;
}

void SerialPort::setPortName(const std::string &value)
{
    port->setPortName(QString(value.c_str()));
    portName = value;
}

uint8_t SerialPort::getDataBitCount() const
{
    return dataBitCount;
}

void SerialPort::setDataBitCount(const uint8_t &value)
{
    dataBitCount = value;
    port->setDataBits(getDataBitsFromInt(value));
}

QSerialPort::DataBits SerialPort::getDataBitsFromInt(int value)
{
    QSerialPort::DataBits temp = QSerialPort::Data5;
    switch (value)
    {
        case 5:
            temp = QSerialPort::Data5;
            break;
        case 6:
            temp = QSerialPort::Data6;
            break;
        case 7:
            temp = QSerialPort::Data7;
            break;
        case 8:
            temp = QSerialPort::Data8;
            break;

    }

    return temp;
}

bool SerialPort::getParity() const
{
    return parity;
}

void SerialPort::setParity(bool value)
{
    parity = value;

}

uint8_t SerialPort::getStopBit() const
{
    return stopBit;
}

void SerialPort::setStopBit(const uint8_t &value)
{
    stopBit = value;
}

uint8_t SerialPort::getFlowControl() const
{
    return flowControl;
}

void SerialPort::setFlowControl(const uint8_t &value)
{
    flowControl = value;
}
