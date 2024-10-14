#include<iostream>
#include<cmath>
using namespace std;
int calculateVolleyballGames( string yearType , int holidays , int hometownweekends );
int main()
{
    string yearType;
    int holidays , hometownweekends ;
    cout<<"Enter year type: ";
    cin >> yearType;
    cout<< "Enter number of holidays: ";
    cin >> holidays ;
    cout<< "Enter number of weekends: ";
    cin >> hometownweekends ;

    int playable=calculateVolleyballGames(yearType , holidays ,  hometownweekends );
    cout<< playable;
}
int calculateVolleyballGames( string yearType , int holidays , int hometownweekends )
{
    float  floathometownweekends ,playableweekends, playableholidays, floatholidays, totalplayableweekends;
    int playabledays;

    floathometownweekends= hometownweekends;
    floatholidays=holidays;
    playableweekends= 48- floathometownweekends;
    playableweekends= playableweekends*3/4;
    playableweekends= playableweekends + floathometownweekends;
    playableholidays=floatholidays*2/3;
    totalplayableweekends=playableholidays + playableweekends;
    if(yearType == "leap")
    {
        totalplayableweekends=totalplayableweekends*1.15;
        playabledays=floor(totalplayableweekends);
    }
    else{
        playabledays= floor(totalplayableweekends); 
    }
    return playabledays;
}