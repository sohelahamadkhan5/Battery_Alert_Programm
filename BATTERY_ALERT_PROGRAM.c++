
/* ADD TIME ELAPSED FUNCTIONALITY */

#include <iostream>
#include <bits/stdc++.h>
#include <windows.h> 
using namespace std;
void playSound();
int func(int argc, char *argv[], int f,int l){
    SYSTEM_POWER_STATUS spsPwr;
        if( GetSystemPowerStatus(&spsPwr) ) {
                cout<<"----------->BATTERY PROGRAMM IS RUNNING<-----------";    

                if(f)
                {
                    cout<<" \n ------> P R O G R A M M    I S    G O I N G    F O R    S L E E P    F O R    :  2 H R S    D O N T ' T    P A N I C    :) \n ";
                    cout<<"\n #  C H A R G E D : Charged upto 85% Unplug the charger to AVOID  H E A T I N G ! ! \n";    
                    return 0;    
                }
                else if(l)
                {
                    cout<<" \n ------> P R O G R A M M    I S    G O I N G    F O R    S L E E P    F O R    :  30 M I N U T E S    D O N T ' T    P A N I C    :) \n ";    
                    cout<<"\n #  C H A R G E D : Charged upto 85% Unplug the charger to AVOID  H E A T I N G ! ! \n";    
                    return 0;
                }
                else
                {

                cout << "\nAC Status : " << static_cast<double>(spsPwr.ACLineStatus)
                    << "\nBattery Status : " << static_cast<double>(spsPwr.BatteryFlag)
                    << "\nBattery Life % : " << static_cast<double>(spsPwr.BatteryLifePercent)
                    << endl;

                }
                

                    // 
                    if(spsPwr.BatteryLifePercent <= 55)
                    {
    
                        playSound();
                        MessageBoxA(NULL, "#  D I S C H A R G E D : \nBattery Below 55% \nPlug the Charger for good battery Health ", " #  D I S C H A R G E D .  .  .  ", MB_OK | MB_ICONINFORMATION);
                        func( argc,  argv ,0,1);
                        Sleep(30*60000); // 30 Minutes
                        return 1;
                    }
                    else if(spsPwr.BatteryLifePercent > 85) //85
                    {   
                        playSound();
                        MessageBoxA(NULL, "#  C H A R G E D : \nCharged upto 85% \nUnplug the charger to AVOID  H E A T I N G ! ! ", " #  C H A R G E D .  .  .  ", MB_OK | MB_ICONINFORMATION);    
                        // cout<<"\n Laptop is charging";
                        // return 0;
                        func( argc,  argv ,1,0);
                        Sleep(2*60*60000);
                        return 1;
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
        n=func( argc,  argv ,0,0);
        Sleep(5*60000); //5 Minutes  5*60000

    }
    return 0;
}



void playSound(){
    Beep(0,1000);
    // Beep(700,1000);
    // Sleep(100);
    // Beep(700,1000);
    // Sleep(100);
    // Beep(700,1000);
    // Sleep(100);
    //Fast
    Sleep(400);
    Beep(700,800);
    Sleep(100);
    Beep(700,800);
    Sleep(100);
    Beep(700,800);
    Sleep(100);
    //
    Beep(700,800);
    Sleep(100);
    Beep(700,800);
    Sleep(100);
    Beep(700,800);
    Sleep(100);
    //
    Beep(700,800);
    Sleep(100);
    Beep(700,800);
    Sleep(100);
   
    Sleep(100);
    //Very Fast
    Beep(0,1000);
    // Sleep(400);
    Beep(700,400);
    Beep(700,400);
    Beep(700,400);
    Beep(700,400);
    Beep(700,400);
    Beep(700,400);
    Beep(700,400);
    Beep(700,400);
}