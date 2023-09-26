#include "devicetouchpad.h"

DeviceTouchPad::DeviceTouchPad():touchPadSensitivity(0)
{

}

void DeviceTouchPad::setTouchPadSensitivity()
{
    cout<<"Aseta kosketuslevyn herkkyys valilla 1-5"<<endl;
    cin>>touchPadSensitivity;
}

short DeviceTouchPad::getTouchPadSensitivity()
{
    return touchPadSensitivity;
}
