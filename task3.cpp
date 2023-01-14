#include <iostream>
using namespace std;

string getZodiac(int date, string month);

main()
{

int date;
string month,zodiac;

cout<<"Enter birth date: ";
cin>>date;

cout<<"Enter birth month: ";
cin>>month;

zodiac=getZodiac(date, month);

cout<<zodiac;



}

string getZodiac(int date, string month)
{
    string zodiac;
    
    if((date>=21 && month=="March") || (date<=19 && month=="April") )
    {
        zodiac="Aries";
    }
    else if((date>=20 && month=="April") || (date<=20 && month=="May"))
    {
        zodiac="Taurus";
    }
    else if((date>=21 && month=="May") || (date<=20 && month=="June") )
    {
        zodiac="Gemini";
    }

    else if((date>=21 && month=="June") || (date<=22 && month=="July"))
    {
        zodiac="Cancer";
    }
    else if((date>=23 && month=="July") || (date<=22 && month=="August") )
    {
        zodiac="Leo";
    }
    else if((date>=23 && month=="August") || (date<=22 && month=="September"))
    {
        zodiac="Virgo";
    }
    else if((date>=23 && month=="September") || (date<=22 && month=="October") )
    {
        zodiac="Libra";
    }
    else if((date>=23 && month=="October") || (date<=21 && month=="November"))
    {
        zodiac="Scorpio";
    }
    else if((date>=22 && month=="November") || (date<=21 && month=="December") )
    {
        zodiac="Sagittarius";
    }
    else if((date>=22 && month=="December") || (date<=19 && month=="January"))
    {
        zodiac="Capricon";
    }
    else if((date>=20 && month=="January") || (date<=18 && month=="February") )
    {
        zodiac="Aquarius";
    }
    
    else if((date>=19 && month=="February") || (date<=20 && month=="March"))
    {
        zodiac="Pisces";
    }

    
    
    return zodiac;
}