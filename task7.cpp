#include <iostream>
using namespace std;

int checkStudentStatus(int examMinute , int examHour , int studentHour , int studentMinutes );
int main()
{
    int examMinute ,examHour , studentMinutes , studentHour;
    cout<<"Enter Exam Starting Time (hours): ";
    cin>> examHour;
    cout<<"Enter Exam Starting Time (minutes): ";
    cin>> examMinute;
    cout<<"Enter Student hour of arrival: ";
    cin>> studentHour;
    cout<<"Enter student minutes of arrival: ";
    cin>> studentMinutes;
    checkStudentStatus(examMinute ,  examHour , studentMinutes , studentHour );
}
int checkStudentStatus(int examMinute , int examHour , int studentMinutes , int studentHour)
{
    int hour, minutes;
    int totalExamMins , totalStudentMins , difference;
    totalExamMins = examMinute + (examHour*60);
    totalStudentMins = studentMinutes + (studentHour*60);
    
    if(totalStudentMins > totalExamMins)
    {
        difference = totalStudentMins - totalExamMins;
        cout<<"Late";
        if(difference >= 60)
        {
            hour = difference/60;
            minutes = difference % 60;
            if(hour==0)
            {
                cout<<"\n"<< minutes<<" minutes after the start";
            }
            else{
                cout<< "\n"<< hour << " : " << minutes <<" Hours after the start";
            }
        }
    }

    if(totalStudentMins <= totalExamMins)
    {
        difference = totalExamMins - totalStudentMins;
        if(difference >= 30)
        {
            hour = difference/60;
            minutes = difference%60;
            cout<<"Early"<<endl;
            if (hour!=0)
            {
                cout<< hour << " : " << minutes <<" 11Hours before the start";   
            }
            else{
                cout<< minutes <<" minutes before the start";
            }
        }
        else if(difference < 60)
        {
            cout<<"On time \n";           
        }
    }
}
