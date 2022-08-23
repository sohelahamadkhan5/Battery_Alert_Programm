#include <iostream>
#include <bits/stdc++.h>
#include <windows.h> 
using namespace std;
int func(int argc, char *argv[]){
    SYSTEM_POWER_STATUS spsPwr;
        if( GetSystemPowerStatus(&spsPwr) ) {
                cout<<"----------->BATTERY PROGRAMM IS RUNNING<-----------";    
                cout << "\nAC Status : " << static_cast<double>(spsPwr.ACLineStatus)
                    << "\nBattery Status : " << static_cast<double>(spsPwr.BatteryFlag)
                    << "\nBattery Life % : " << static_cast<double>(spsPwr.BatteryLifePercent)
                    << endl;
                    // 
                    if(spsPwr.BatteryLifePercent <= 55){
    
                        MessageBoxA(NULL, "#  D I S C H A R G E D : \nBattery Below 55% \nPlug the Charger for good battery Health ", " #  D I S C H A R G E D .  .  .  ", MB_OK | MB_ICONINFORMATION);
                        Sleep(30*60000); // 30 Minutes
                        return 1;
                    }
                    else if(spsPwr.BatteryLifePercent >= 85)
                    {   
                        MessageBoxA(NULL, "#  C H A R G E D : \nCharged upto 85% \nUnplug the charger to AVOID  H E A T I N G ! ! ", " #  C H A R G E D .  .  .  ", MB_OK | MB_ICONINFORMATION);    
                        // cout<<"\n Laptop is charging";
                        return 0;
                    }
                    else
                    {
                        return 1;
                    }
               
            } 
    
}

int main(int argc, char *argv[])
{
    int n =1;
    while(n)
    {

        // cout<<"hello";
        n=func( argc,  argv );
        Sleep(5*60000); //5 Minutes

    }
    return 0;
}