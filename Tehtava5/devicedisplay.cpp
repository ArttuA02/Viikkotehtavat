#include "devicedisplay.h"

DeviceDisplay::DeviceDisplay():displayResolution(0)
{

}

void DeviceDisplay::setDisplayResolution()
{
    cout<<"Aseta näytön resoluutio valilla 1-10"<<endl;
    cin>>displayResolution;
}

short DeviceDisplay::getDisplayResolution()
{
    return displayResolution;
}
