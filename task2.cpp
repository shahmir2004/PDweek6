#include <iostream>
using namespace std;

float Percentage();
int totalMarks();
string Grade();

int marks1,marks2,marks3,marks4,marks5,totalmarks;
string name;
float percentage;
string grade;

main()
{

    cout<<"Enter student name: ";
    cin>>name;
    
    cout<<"Enter English marks: ";
    cin>>marks1;
    cout<<"Enter Math marks: ";
    cin>>marks2;
    cout<<"Enter Chemistery marks: ";
    cin>>marks3;
    cout<<"Enter Social Science marks: ";
    cin>>marks4;
    cout<<"Enter Biology marks: ";
    cin>>marks5;

    totalmarks=totalMarks();
    percentage=Percentage();
    grade=Grade();

    cout<<"The student "<<name<<" has "<<percentage<<" percent marks with total marks of "<<totalmarks<<" and grade of "<<grade<<".";

}



int totalMarks()
{

    totalmarks=marks1+marks2+marks3+marks4+marks5;
    return totalmarks;

}

float Percentage()
{
    
    percentage=totalmarks/5.0;
    return percentage;

}



string Grade()
{
    
    if(percentage>=90 && percentage<=100)
    {
        grade="A+";
    }
    else if(percentage>=80 && percentage<=89)
    {
        grade="A";
    }
    else if(percentage>=70 && percentage<=79)
    {
        grade="B+";
    }
    else if(percentage>=60 && percentage<=69)
    {
        grade="B";
    }
    else if(percentage>=50 && percentage<=59)
    {
        grade="C";
    }
    else if(percentage>=40 && percentage<=49)
    {
        grade="D";
    }
    else if(percentage<=39)
    {
        grade="F";
    }
    return grade;
}