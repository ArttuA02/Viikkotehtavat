#include "devicebaseclass.h"

DeviceBaseClass::DeviceBaseClass()
{
    deviceID = 0;
}

void DeviceBaseClass::setDeviceID()
{
    cout<<"Anna device ID"<<endl;
    cin>>deviceID;
}

short DeviceBaseClass::getDeviceID()
{
    return deviceID;
}
