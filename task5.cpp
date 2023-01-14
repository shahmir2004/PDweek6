#include <iostream>
using namespace std;

float weekdayPrice(float quantity, string fruit);
float weekendPrice(float quantity, string fruit);

main()
{

    float quantity;
    string day, fruit_type;
    float price;

    cout<<"Enter day of shopping: ";
    cin>>day;
    
    cout<<"Enter name of fruit bought: ";
    cin>>fruit_type;
    
    cout<<"Enter quantity of fruit bought: ";
    cin>>quantity;


    if((day=="monday" || day=="tuesday" || day=="wednesday" || day =="thursday" || day=="friday" || day=="saturday" || day=="sunday") && (fruit_type=="banana" || fruit_type=="apple" || fruit_type=="orange" || fruit_type=="grapefruit" || fruit_type=="kiwi" || fruit_type=="pineapple" ||fruit_type=="grapes"))
    { 
        if(day=="sunday" || day=="saturday")
        {
            price=weekendPrice(quantity, fruit_type);
            cout<<"Price of fruit bought is: "<<price;
        }
        else
        {
            price=weekdayPrice(quantity, fruit_type);
            cout<<"Price of fruit bought is: "<<price;
        }
    }
    else
    {
        cout<<"Invalid piece of information";
    }



}

float weekdayPrice(float quantity, string fruit)
{
    float price;
    
    if(fruit=="banana")
    {
        price=quantity*2.5;
    }
    else if(fruit=="apple")
    {
        price=quantity*1.20;
    }
    else if(fruit=="orange")
    {
        price=quantity*0.85;
    }
    else if(fruit=="grapefruit")
    {
        price=quantity*1.45;
    }
    else if(fruit=="kiwi")
    {
        price=quantity*2.70;
    }
    else if(fruit=="pineapple")
    {
        price=quantity*5.50;
    }
    else if(fruit=="grapes")
    {
        price=quantity*3.85;
    }

    return price;


}

float weekendPrice(float quantity, string fruit)
{

    float price;

    if(fruit=="banana")
    {
        price=quantity*2.70;
    }
    else if(fruit=="apple")
    {
        price=quantity*1.25;
    }
    else if(fruit=="orange")
    {
        price=quantity*0.9;
    }
    else if(fruit=="grapefruit")
    {
        price=quantity*1.60;
    }
    else if(fruit=="kiwi")
    {
        price=quantity*3.00;
    }
    else if(fruit=="pineapple")
    {
        price=quantity*5.60;
    }
    else if(fruit=="grapes")
    {
        price=quantity*4.20;
    }
    return price;

}

