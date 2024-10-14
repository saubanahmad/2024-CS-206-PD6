#include <iostream>
using namespace std;

void input();
string decideActivity(string activity);

string temprature, humidity;

main()
{
    input();
    string activity= decideActivity(activity);
    cout<< activity;
}

void input()
{
    cout<<"Enter temprature(warm or cold): ";
    cin>>temprature;
    cout<<"Enter humidity(dry or humid): ";
    cin>> humidity;
}

string decideActivity(string activity)
{
    if(temprature== "warm")
    {
        if(humidity=="dry")
        {
            activity= "Play tennis";
        }
        else
        {
            activity="swim";
        }
    }
    else
    {
        if(humidity=="dry")
        {
            activity="Play basketball";
        }
        else
        {
            activity="Watch TV";
        }
    }
    return activity;
}
