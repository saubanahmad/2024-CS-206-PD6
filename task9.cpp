#include<iostream>
using namespace std;

string checkPointPosition(int x, int y , int height);

int main()
{
    int x, y, height;
    cout<<"Enter height: ";
    cin>> height;
    cout<<"Enter x cordinate: ";
    cin>> x;
    cout<<"Enter y cordinate: ";
    cin >> y;
    string result=checkPointPosition( x,  y , height);
    cout<< result;
}

string checkPointPosition(int x, int y , int height)
{
    string location;
    if( (x>=0 || x <= (3*height)) && (y == height || y == 0))
    {
        location="Outside";
    }
    else if(( x==height || x == (2*height) )&& (y >= height && y <= (4*height) ))
    {
        location="Border";   
    }
    else if( (x>=0 || x <= (3*height)) && y < height )
    {
        location="Inside";
    }
    else if(( x>=height && x <= (2*height) )&& (y >= height && y <= (4*height) ))
    {
        location="Inside";
    }
    else
    {
        location="Outside";
    }
    return location;
}