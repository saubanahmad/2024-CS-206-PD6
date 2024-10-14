#include <iostream>
#include <string>

using namespace std;

float calculateFruitPrice(string fruit, string dayOfWeek, float quantity);

main() {
    string fruit;
    string dayOfWeek;
    float quantity;
    cout << "Enter the fruit name: ";
    cin >> fruit;
    cout << "Enter day of the week(e.g., Monday, Sunday): ";
    cin >> dayOfWeek;
    cout << "Enter the quantity: ";
    cin >> quantity;
    float price= calculateFruitPrice(fruit, dayOfWeek, quantity);
    if (price==0)
    {
        cout<<"error";
    }
    else
    {
        cout<<price;
    }
}

float calculateFruitPrice(string fruit, string dayOfWeek, float quantity)
{
    float price;
    if (dayOfWeek== "Monday" || dayOfWeek== "Tuesday"  || dayOfWeek== "Wednesday"||dayOfWeek== "Thursday"||dayOfWeek== "Friday"||dayOfWeek== "Saturday")
    {
        if (fruit =="banana")
        {
            price= quantity*2.50;
        }
        else if(fruit =="apple")
        {
            price=quantity*1.20;
        }
        else if(fruit =="orange")
        {
            price=quantity*0.85;
        }
        else if(fruit =="grapefruit")
        {
            price=quantity*1.45;
        }
        else if(fruit =="kiwi")
        {
            price=quantity*2.70;
        }
        else if(fruit =="pineapple")
        {
            price=quantity*5.50;
        }
        else if(fruit =="grapes")
        {
            price=quantity*3.85;
        }
        else
        {
            price =0;
        }
    }
    else if (dayOfWeek== "Sunday")
    {
        if (fruit =="banana")
        {
            price= quantity*2.70;
        }
        else if(fruit =="apple")
        {
            price=quantity*1.25;
        }
        else if(fruit =="orange")
        {
            price=quantity*0.90;
        }
        else if(fruit =="grapefruit")
        {
            price=quantity*1.60;
        }
        else if(fruit =="kiwi")
        {
            price=quantity*3.00;
        }
        else if(fruit =="pineapple")
        {
            price=quantity*5.60;
        }
        else if(fruit =="grapes")
        {
            price=quantity*4.20;
        }
        else
        {
            price =0;
        }
    }
    else
    {
        price =0;
    }
    return price;
}