#include <iostream>
using namespace std;
float regularPrice(int minutes);
float premiumPrice(int minutes, char time);

main()
{

    char type;
    char time;
    int  minutes;
    float price;

    cout<<"Enter type residential (r or R) or premium (p or P): ";
    cin>>type;

    
    if(type!='r' || type!='R')
    {
        cout<<"invalid type"<<endl;
    }
    else if (type=='r' || type=='R')
    {
        cout<<"Enter minutes spent on phone: ";
        cin>>minutes;
        price=regularPrice(minutes);
        cout<<price;
    }

    else if(type=='p' || type=='P')
    {
        
        cout<<"Enter minutes spent on phone: ";
        cin>>minutes;
        cout<<"Enter (d or D) for day or (n or N) for night time call: ";
        cin>>time;
        price=premiumPrice(minutes, time);
        cout<<price;

    }


}

float regularPrice(int minutes)
{

    float price;
    int diffmins;

    if(minutes<=50)
    {
        price=10.0;
    }

    if(minutes>50)
    {
        diffmins=minutes-50;
        price=(diffmins*0.2)+10.0;
    }

    return price;

}

float premiumPrice(int minutes, char time)
{
    float price;
    int diffmins;
    if(time=='d' || time=='D')
    {
        if(minutes<=75)
        {
            price=25.0;
        }
        if(minutes>75)
        {
            diffmins=minutes-75;
            price=(diffmins*0.10)+25.0;
        }
    }

    if(time=='n' || time=='N')
    {
        if(minutes<=100)
        {
            price=25.0;
        }
        if(minutes>100)
        {
            diffmins=minutes-100;
            price=(diffmins*0.05)+25.0;
        }

    }

    return price;


}

