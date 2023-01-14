#include<iostream>
using namespace std;

void examTime(int hourexam, int minuteexam, int hourarrive, int minutearrive);
main()
{


    int hourexam;
    int minuteexam;
    int hourarrive;
    int minutearrive;
    

    cout<<"Enter exam starting hour: ";
    cin>>hourexam;

    cout<<"Enter exam starting minutes: ";
    cin>>minuteexam;

    cout<<"Enter hour of arrival: ";
    cin>>hourarrive;

    cout<<"Enter minutes of arrival: ";
    cin>>minutearrive;

    examTime(hourexam, minuteexam, hourarrive, minutearrive);

}

void examTime(int hourexam, int minuteexam, int hourarrive, int minutearrive)
{

    int houranswer, minuteanswer, hoursanswer, diffhours, diffmins;

    if (hourarrive==hourexam) 
    {
        if(minuteexam<minutearrive)
        {
            minuteanswer=minutearrive-minuteexam;
            cout<<"late"<<endl;
            cout<<minuteanswer<<" minutes after the start";
        }
        else if(minuteexam>minutearrive)
        {
            minuteanswer=minuteexam-minutearrive;
            cout<<"On time"<<endl;
            cout<<minuteanswer<<" Before the exam";
        }
        else if(minuteexam==minutearrive)
        {
            cout<<"On time";
        }
    
    }

    else if(hourarrive>hourexam)
    {
        if(minutearrive>minuteexam)
        {
            houranswer=hourarrive-hourexam;
            minuteanswer=minutearrive-minuteexam;
            cout<<"Late"<<endl;
            cout<<houranswer<<":"<<minuteanswer<<" hours late";
        }

        else if(minutearrive<minuteexam)
        {
            minuteanswer=minutearrive+minuteexam;
            cout<<"late"<<endl;
            cout<<minuteanswer<<" minutes late";
        }
        else if (minutearrive==minuteexam)
        {
            houranswer=hourarrive-hourexam;
            cout<<"Late"<<endl;
            cout<<houranswer<<" hours late";
        }
    }

   
    if(hourarrive<hourexam)
    {
        if(minutearrive<minuteexam)
        {
            houranswer=hourexam-hourarrive;
            minuteanswer=minuteexam-minutearrive;
            cout<<"Early"<<endl;
            cout<<houranswer<<":"<<minuteanswer<<" hours before start";
        }
        else if(minutearrive>minuteexam)
        {
            
            diffmins=60-minutearrive;
            minuteanswer=minuteexam+diffmins;
            
            
            // minuteanswer=minutearrive-minuteexam;
            cout<<"Early"<<endl;
            cout<<minuteanswer<<" minutes early";
        }
        else if(minutearrive==minuteexam)
        {
            houranswer=hourexam-hourarrive;
            cout<<"Early "<<endl;
            cout<<houranswer<<" Hours early";
        }

    
    }



}
