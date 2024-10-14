#include <iostream>
using namespace std;

float regularService(float mins, char service);
float premiumService(float mins, char time, char service);

main()
{
    float mins, amount;
    char service, time;
    string serviceType;
    cout<<"Enter the service code (R/r for regular, P/p for premium): ";
    cin>> service; 
    if(service=='r'||service=='R')
    {
        serviceType= "Regular";
        cout<<"Enter the number of minutes used: ";
        cin>>mins;
        amount= regularService(mins, service);
    }
    else
    {
        serviceType= "Premium";
        cout<<"Enter the time of the call (D/d for day, N/n for night): ";
        cin>> time;
        cout<<"Enter the number of minutes used: ";
        cin>>mins;
        amount= premiumService(mins, time, service);
    }
    cout<<"Service Type: "<<serviceType<<endl;
    cout<<"Total minutes used: "<<mins<<" minutes"<<endl; 
    cout<<"Amount due: $"<<amount;
    
    
}

float regularService(float mins, char service)
{
    float amount;
    if(mins<=50)
    {
        amount= 10.00;
    }
    else
    {
        amount= 10.00 + (mins-50)*0.20;
    }
    return amount;
}


float premiumService(float mins, char time, char service)
{
    float amount;
    
    if(time== 'd'||time=='D')
    {
        if(mins<=75)
        {
            amount=25;
        }
        else{
            amount= 25+(mins-75)*0.10;
        }
    }
    if(time== 'n'||time=='N')
    {
        if(mins<=100)
        {
            amount=25;
        }
        else{
            amount= 25+(mins-100)*0.05;
        }
    }
    return amount;
}
