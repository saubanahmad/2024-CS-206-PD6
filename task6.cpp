#include<iostream>
#include<iomanip>
using namespace std;
float priceStudio(float, string);
float priceAppartment(float, string);

main()
{
    string month;
    float studioprice, appartmentprice, stays;
    cout<< "Enter the month (May, June, July, August, September, October) : ";
    cin>> month;
    cout<< "Enter the number of stays: ";
    cin>> stays;
    studioprice = priceStudio(stays, month);
    appartmentprice = priceAppartment(stays, month);
    cout<< "Appartment: "<<fixed<<setprecision(6)<< appartmentprice<<"$"<<endl;
    cout<< "Studio: "<< fixed<< setprecision(6)<<studioprice<<"$"<< endl;
   
}
float priceStudio(float stays, string month)
{
    float studioprice;
    if (month == "May" || month == "October")
    {
        if (stays > 7 && stays <= 14)
        {
            studioprice = stays * (50 * 0.95);
        }
        else if (stays > 14)
        {
            studioprice = stays * (50 * 0.70);
        }
        else if(stays <= 7)
        {
            studioprice = stays * 50.0;
        }
    }

    else if (month == "June" || month == "September")
    {
        if (stays > 14)
        {
            studioprice = stays * (75.20 * 0.8);
        }
        else if (stays <= 14)
        {
            studioprice = stays * 75.20;
        }
    }
    else if(month == "July" || month == "August")
    {
        studioprice = stays * 76.0;
        
    }
    return studioprice;
}

float priceAppartment(float stays, string month)
{
    float appartmentprice;

    if (month == "May" || month == "October")
    {
        if (stays > 14)
        {
            appartmentprice = stays * (65.0 * 0.9);
        }
        else
        {
            appartmentprice = stays * 65.0;
        }
    }

    else if (month == "June" || month == "September")
    {
       if (stays > 14)
        {
            appartmentprice = stays * (68.7 * 0.9);
        }
        else
        {
            appartmentprice = stays * 68.7;
        }

    }
    else if(month == "July" || month == "August")
    {
        if (stays > 14)
        {
            appartmentprice = stays * (77.0 * 0.9);
        }
        else
        {
            appartmentprice = stays * 77.0;
        }   
    }
    return appartmentprice;
}