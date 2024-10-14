#include <iostream>
using namespace std;

float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology);
string calculateGrade(float average);

main()
{
    float marksEnglish, marksMaths, marksChemsitry, marksSocialScience, marksBiology;
    string name;
    cout<<"Enter student name: "<<endl;
    cin>> name;
    cout<< "Student name: " << name<<endl;
    float average= calculateAverage(marksEnglish, marksMaths, marksChemsitry, marksSocialScience, marksBiology);
    string grade= calculateGrade(average);
    cout<< "Percentage: "<< average << "%"<<endl;
    cout<< "Grade: "<<grade<<endl;
    }


float calculateAverage(float marksEnglish, float marksMaths, float marksChemistry, float marksSocialScience, float marksBiology)
{
    cout<<"Enter marks for English: ";
    cin>> marksEnglish;
    cout<<"Enter marks for Maths: ";
    cin>> marksMaths;
    cout<<"Enter marks for Chemistry: ";
    cin>> marksChemistry;
    cout<<"Enter marks for Social Science: ";
    cin>> marksSocialScience;
    cout<<"Enter marks for Biology: ";
    cin>> marksBiology;
    //formula of average:
    float average= (marksEnglish + marksMaths + marksChemistry + marksSocialScience + marksBiology)/5 ;
    return average;
}

string calculateGrade(float average)
{
    string grade;
    //as per given conditions.
    if(average>=90)
    {
        grade = "A+"; 
    }
    else if(average>=80)
    {
        grade = "A";
    }
    else if(average>=70)
    {
        grade= "B+";
    }
    else if(average>=60)
    {
        grade= "B";
    }
    else if(average>=50)
    {
        grade= "C";
    }
    else if(average>=40)
    {
        grade= "D";
    }
    else
    {
        grade = "F";
    }
    return grade;
}
