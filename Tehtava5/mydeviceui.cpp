#include "mydeviceui.h"

MyDeviceUI::MyDeviceUI()
{
    pDeviceMouse = new DeviceMouse;
    pDeviceTouchPad = new DeviceTouchPad;
    pDeviceDisplay = new DeviceDisplay;
}

MyDeviceUI::~MyDeviceUI()
{
    delete pDeviceMouse;
    pDeviceMouse = nullptr;
    delete pDeviceTouchPad;
    pDeviceTouchPad = nullptr;
    delete pDeviceDisplay;
    pDeviceDisplay = nullptr;
}

void MyDeviceUI::uiShowMenu()
{
    cout<<"Device Menu"<<endl;
    cout<<"==========="<<endl;
    cout<<"1. Set mouse information"<<endl;
    cout<<"2. Set touch pad information"<<endl;
    cout<<"3. Set display information"<<endl;
    cout<<"4. Show devices information"<<endl;
    cout<<"5. Finish"<<endl;
    cout<<"\nChoose: "<<endl;
}

void MyDeviceUI::uiSetMouseInformation()
{
    pDeviceMouse->setDeviceID();
    pDeviceMouse->setPrimaryButton();
}

void MyDeviceUI::uiSetTouchPadInformation()
{
    pDeviceTouchPad->setDeviceID();
    pDeviceTouchPad->setTouchPadSensitivity();
}

void MyDeviceUI::uiSetDisplayInformation()
{
    pDeviceDisplay->setDeviceID();
    pDeviceDisplay->setDisplayResolution();
}

void MyDeviceUI::uiShowDeviceInformation()
{
    cout<<"\n========= Device Information =============="<<endl;
    cout<<"Mouse device ID: "<< pDeviceMouse->getDeviceID()<<" Primary button: "<< pDeviceMouse->getPrimaryButton()<<"       |"<<endl;
    cout<<"Touch pad device ID: "<<pDeviceTouchPad->getDeviceID()<<" Sensitivity: "<<pDeviceTouchPad->getTouchPadSensitivity()<<"      |"<<endl;
    cout<<"Display device ID: "<<pDeviceDisplay->getDeviceID()<<" Display resolution: "<<pDeviceDisplay->getDisplayResolution()<<" |"<<endl;
    cout<<"===========================================\n"<<endl;
}
