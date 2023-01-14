#include <iostream>
using namespace std;

float apartmentPrice(string month, int stays);
float studioPrice(string month, int stays);

main()
{
    string month;
    int stays;
    
    float apartmentprice, studioprice;

    cout<<"enter number of stays: ";
    cin>>stays;

    cout<<"Enter the month: ";
    cin>>month;

    cout<<"Enter the type of room: ";
    
    apartmentprice=apartmentPrice(month, stays);
    studioprice=studioPrice(month, stays);

    cout<<"Apartment: "<<apartmentprice<<endl;
    cout<<"Studio: "<<studioprice<<endl;
    
}

float apartmentPrice(string month, int stays)
{
    
    float price;
    if(month=="may" || month=="october")
    {
        if(stays<=14)
        {
            price=stays*65.0;
        }
        else
        {
            price=(stays*65.0)*0.9;
        }
    }

    if(month=="june" || month=="september")
    {
        if(stays<=14)
        {
            price=stays*68.7;
        }
        else
        {
            price=(stays*68.7)*0.9;
        }        
    }
    if(month=="july" || month=="august")
    {
        if(stays<=14)
        {
            price=stays*77.0;
        }
        else
        {
            price=(stays*77.0)*0.9;
        }        
    }
    return price;
}

float studioPrice(string month, int stays)

{
    float price;
    if(month=="may" || month=="october")
    {
        if(stays>14)
        {
            price=(stays*50.0)*0.7;
        }
        else if(stays>7)
        {
            price=(stays*50.0)*0.95;
        }
        else
        {
            price=stays*50.0;
        }
    }

    else if(month=="june" || month=="september")
    {
        if(stays>14)
        {
            price=(stays*75.20)*0.8;
        }
        else
        {
            price=stays*75.20;
        }

    }

    else if(month=="july" || month=="august")
    {
        price=stays*76.0;
    }

    return price;

}