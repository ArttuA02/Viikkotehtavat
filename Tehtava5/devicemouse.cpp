#include "devicemouse.h"

DeviceMouse::DeviceMouse():primaryButton(0)
{

}

void DeviceMouse::setPrimaryButton()
{
    cout<<"Anna mouse primary button(mouse1 tai mouse2): "<<endl;
    cin>>primaryButton;
}

short DeviceMouse::getPrimaryButton()
{
    return primaryButton;
}
