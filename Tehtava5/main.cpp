#include <iostream>
#include "mydeviceui.h"

using namespace std;

int main()
{
    MyDeviceUI olio;
    int choice;

    do
    {
        olio.uiShowMenu();
        cin>>choice;

        switch (choice)
        {
        case 1:
            olio.uiSetMouseInformation();
            break;
        case 2:
            olio.uiSetTouchPadInformation();
            break;
        case 3:
            olio.uiSetDisplayInformation();
            break;
        case 4:
            olio.uiShowDeviceInformation();
            break;
        case 5:
            cout<<"Lopetetaan."<<endl;
            break;
        default:
            cout<<"Virhe. Anna vaihtoehdon numero."<<endl;
            break;
        }
    } while (choice != 5);
    return 0;
}
