#include <iostream>
using namespace std;

string findZodiacSign(int day, string month);

int main()
{
    int day;
    string month;
    cout << "Enter the day of birth: ";
    cin >> day;
    cout << "Enter the month of birth (e.g., January, February): ";
    cin >> month;
    
    string sign;
    sign = findZodiacSign(day, month);
    cout << "Zodiac sign: "<< sign << endl;
    return 0;
}


string findZodiacSign(int day, string month)
{
    string sign;
    if (month == "January") {
        if (day <= 19) {
            sign = "Capricorn";
        } else {
            sign = "Aquarius";
        }
    } else if (month == "February") {
        if (day <= 18) {
            sign = "Aquarius";
        } else {
            sign = "Pisces";
        }
    } else if (month == "March") {
        if (day <= 20) {
            sign = "Pisces";
        } else {
            sign = "Aries";
        }
    } else if (month == "April") {
        if (day <= 19) {
            sign = "Aries";
        } else {
            sign = "Taurus";
        }
    } else if (month == "May") {
        if (day <= 20) {
            sign = "Taurus";
        } else {
            sign = "Gemini";
        }
    } else if (month == "June") {
        if (day <= 20) {
            sign = "Gemini";
        } else {
            sign = "Cancer";
        }
    } else if (month == "July") {
        if (day <= 22) {
            sign = "Cancer";
        } else {
            sign = "Leo";
        }
    } else if (month == "August") {
        if (day <= 22) {
            sign = "Leo";
        } else {
            sign = "Virgo";
        }
    } else if (month == "September") {
        if (day <= 22) {
            sign = "Virgo";
        } else {
            sign = "Libra";
        }
    } else if (month == "October") {
        if (day <= 22) {
            sign = "Libra";
        } else {
            sign = "Scorpio";
        }
    } else if (month == "November") {
        if (day <= 21) {
            sign = "Scorpio";
        } else {
            sign = "Sagittarius";
        }
    } else if (month == "December") {
        if (day <= 21) {
            sign = "Sagittarius";
        } else {
            sign = "Capricorn";
        }
    }
    return sign;
}