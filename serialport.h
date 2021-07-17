#ifndef SERIALPORT_H
#define SERIALPORT_H

#include <QSerialPort>
#include <string>

class SerialPort
{
public:
    SerialPort();
    ~SerialPort();

    int getBaudRate() const;
    void setBaudRate(int value);

    std::string getPortName() const;
    void setPortName(const std::string &value);

    uint8_t getDataBitCount() const;
    void setDataBitCount(const uint8_t &value);
    QSerialPort::DataBits getDataBitsFromInt(int value);

    bool getParity() const;
    void setParity(bool value);

    uint8_t getStopBit() const;
    void setStopBit(const uint8_t &value);

    uint8_t getFlowControl() const;
    void setFlowControl(const uint8_t &value);

private:
    QSerialPort *port = nullptr;

    int baudRate;
    std::string portName;
    uint8_t dataBitCount;
    bool parity;
    uint8_t stopBit;
    uint8_t flowControl;
};

#endif // SERIALPORT_H
