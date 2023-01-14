#include<iostream>
using namespace std;

string pointLocation(int h, int x, int y);

main()
{
    int x,y,h;
    string result=" ";

    cout<<"Enter the value of h: ";
    cin>>h;

    cout<<"Enter the x coordinate: ";
    cin>>x;

    cout<<"Enter the y coordinate: ";
    cin>>y;   

    result=pointLocation(h,x,y);
    cout<<result;


}

string pointLocation(int h, int x, int y)
{
   
    string result=" ";

    
    if(((x<0 || x>3*h) || (y<0 || y>h)) && ((x<h || x>2*h) || (y<h || y>4*h)))
    {
      
        result="Outside";
        
    }

    else if(((x>0 && x<3*h) && (y>0 && y<h)) || ((x>h && x<2*h) && (y>h && y<4*h)))
    {
        result="inside";
       
    }

    else
    {
        result="border";
    }
    
    
    return result;



}