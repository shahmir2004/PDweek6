#include<iostream>
using namespace std;
string activity(string temprature, string humidity);
main()
{

    string temp, humid,todo;

    cout<<"Enter the weather: "<<endl;
    cin>>temp;

    cout<<"Enter the humidity level: "<<endl;
    cin>>humid;

    todo=activity(temp, humid);
    cout<<todo;



}

string activity(string temprature, string humidity)
{
    string todo;
    
    if (temprature=="warm" && humidity=="dry")
    {
        todo="Play tennis.";
    }
    else if(temprature=="warm" && humidity=="humid")
    {
        todo="swim.";
    }
    else if(temprature=="cold" && humidity=="dry")
    {
        todo="Play basketball.";
    }
    else if(temprature=="cold" && humidity=="humid")
    {
        todo="Watch TV.";
    }

    return todo;
}