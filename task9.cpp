#include <iostream>
#include <windows.h>
using namespace std;
// Function Prototype
void printmaze( ) ;
void gotoxy(int x, int y);
void erase(int x, int y);
void printPacman(int x, int y);
char getCharAtxy(short int x, short int y);
void clear(int x, int y, char previous);
void showghost(int x, int y);
void moveghostsupdown(int g1x, int g1y, int g2x, int g2y, char previousChar, string directionx, string directiony);




 
main()
{
    int g1x =1;
    int g1y =1;
    int g2x =3;
    int g2y =3;

    string directionx = "right";
    string directiony ="up";
    char previousChar = ' ';
    system( "cls" ) ;
    printmaze();
    showghost(g1x, g1y);
    showghost(g2x, g2y);
    
    while(true)
    {
        moveghostsupdown(g1x, g1y, g2x, g2y, previousChar, directionx, directiony);
    }
    
}

void printmaze()
{

    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%                                  %"<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;

}



void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X =x;
    coordinates.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}

void clear(int x, int y, char previous)
{
    gotoxy(x,y);
    cout<< previous;
}

void showghost(int x, int y)
{
    gotoxy(x,y);
    cout<<"G";
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy ={0, 0};
    SMALL_RECT rect ={x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ?ci.Char.AsciiChar :' ';

}


void moveghostsupdown(int g1x, int g1y, int g2x, int g2y, char previousChar, string directionx, string directiony)
{
    while (true)
    {
        Sleep(100);
        if(directionx=="right")
        {
            char nextlocation=getCharAtxy(g1x+1,g1y);
            if(nextlocation=='%')
            {
                directionx="left";
            }
            else if(nextlocation==' '|| nextlocation=='.')
            {
                clear(g1x, g1y,previousChar);
                g1x=g1x+1;
                previousChar=nextlocation;
                showghost(g1x,g1y);
            }
        }   
        if(directionx=="left")
        {
            char nextlocation=getCharAtxy(g1x-1,g1y);
            if(nextlocation=='%')
            {
                directionx="right";
            }
            else if(nextlocation==' ' || nextlocation=='.')
            {
                clear(g1x, g1y,previousChar);
                g1x=g1x-1;
                previousChar=nextlocation;
                showghost(g1x,g1y);
            }
        }   
        if(directiony=="up")
        {
            char nextlocation=getCharAtxy(g2x,g2y-1);
            if(nextlocation=='%')
            {
                directiony="down";
            }
            else if(nextlocation==' '|| nextlocation=='.')
            {
                clear(g2x, g2y,previousChar);
                g2y=g2y-1;
                previousChar=nextlocation;
                showghost(g2x,g2y);
            }
        }   
        if(directiony=="down")
        {
            char nextlocation=getCharAtxy(g2x,g2y+1);
            if(nextlocation=='%')
            {
                directiony="up";
            }
            else if(nextlocation==' ' || nextlocation=='.')
            {
                clear(g2x, g2y,previousChar);
                g2y=g2y+1;
                previousChar=nextlocation;
                showghost(g2x,g2y);
            }
        }   
    
    }
}



