#include <iostream>
#include <bits/stdc++.h>
#include <windows.h> 
using namespace std;
int main(int argc, char *argv[])
{
    // MessageBox(NULL, L"The message", L"The caption", MB_OK);    
    // MessageBoxA(NULL, "Wake Up!", "Alert!", MB_OK | MB_ICONEXCLAMATION);
    // MessageBox( nullptr, TEXT( "The driver is sleeping!!" ), TEXT( "Message" ), MB_OK );
   
    // ----------------><------------
            SYSTEM_POWER_STATUS spsPwr;
    do {

            if( GetSystemPowerStatus(&spsPwr) ) {
                cout << "\nAC Status : " << static_cast<double>(spsPwr.ACLineStatus)
                    << "\nBattery Status : " << static_cast<double>(spsPwr.BatteryFlag)
                    << "\nBattery Life % : " << static_cast<double>(spsPwr.BatteryLifePercent)
                    << endl;

                    if(spsPwr.BatteryFlag==91)
                        MessageBoxA(NULL, "Laptop is charged", "Alert!", MB_OK | MB_ICONEXCLAMATION);    
                        // cout<<"\n Laptop is charging";
                    else
                        cout<<"\n Laptop is not charging";
                    
                return 0;
            } else return 1;


    }
    while (spsPwr.BatteryFlag==90);
    
}