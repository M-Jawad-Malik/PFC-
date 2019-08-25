// Periodic Table.cpp : main project file.

#include <iostream>
#include <conio.h>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <windows.h>


using namespace std;
using namespace std;

struct Element
{
	int Atomic_Number;
	int x;
	int y;
	string Symbol;
	string Name;
	double Atomic_Weight;
	float Melting_Point;
	float Boiling_Point;
	double Density;
	int Discovery_Year;
	double Ionization_Energy;
	int Element_Type;
	int Element_State;
};

void display(vector< Element >&, int, int );
void element(int,int);
void Show_Element(vector< Element >&, int, int, int );
void welcome_screen();
void Fill_Vector(vector< Element >&, ifstream& ElementStream);
void Box(int, int, int, int, int, int, int, int, int, int);
void text(int,int);
void gotoXY(int,int);
void gotoXY(int,int,string);
void frame();
void clrscr();
void setcursor(bool visible, DWORD size);
void WaitKey();

#define ENTER 13
#define ESC 27
#define UP 72
#define LEFT 75
#define RIGHT 77
#define DOWN 80

#define on ,

enum Colors{
  black,          //  0
  dark_blue,      //  1
  dark_green,     //  2
  dark_cyan,      //  3
  dark_red,       //  4
  dark_magenta,   //  5
  dark_yellow,    //  6
  light_gray,     //  7
  dark_gray,      //  8
  light_blue,     //  9
  light_green,    // 10
  light_cyan,     // 11
  light_red,      // 12
  light_magenta,  // 13
  light_yellow,   // 14
  white           // 15
  };


const int width = 80, height = 30;

HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
COORD CursorPosition;

void main()
{
	string rub(58,' ');
	string shadowline(39,'\xC4');
	Console::SetWindowSize(width, height );
	vector <Element> Number;
	ifstream ElementStream;
	ElementStream.open("Element_Data.txt");

	Fill_Vector( Number, ElementStream);
	Box(0,0,0,78,25,black on light_gray,0,0,0);
	setcursor(0,0);
	welcome_screen();
	Sleep(1500);
	Box(2,25,9,28,9,black on light_gray,0,0,0);
	gotoXY(36,10,"WELCOME");
	gotoXY(36,13,"TO  THE");
	gotoXY(33,16,"PERIODIC TABLE");

	Sleep(3000);

	display(Number, 13,5);
 Box(2,20,12,39,8,black on light_yellow,0,0,0);
 text(black on dark_cyan);
 gotoXY(59,13,"e");
 gotoXY(59,14,"\xC4");
 gotoXY(59,15,"o");
 gotoXY(59,16,"\xC4");
 gotoXY(59,17,"v");
 gotoXY(59,18,"\xC4");
 gotoXY(59,19," ");
 gotoXY(21,20,shadowline);
 for(int x=0;x<12;x++)
	 gotoXY(24+x*3,20,"\xC2");
 Console::SetWindowSize(width, height );
 text(black on light_yellow);
 gotoXY(27,13, "Program Written Using :");
 gotoXY(23,14,"Microsoft Visual C++ 2012 Express");
 gotoXY(28,16,"Written By: whitenite1");
 gotoXY(26,18,"Written In : December 2012");
 text(black on light_gray);
 gotoXY(12,28, rub);
 gotoXY(22,28);
 WaitKey();
}

void display(vector< Element >& Number, int x, int y)
{
	string Element_Group[11] = { "Alkali Metal","Alkaline Earth Metal","Lanthanide","Actinide","Transition Metal","Basic Metal","Semi-Metal","Nonmetal","Halogen","Noble Gas","Metalloid"};
	string State[4] = {"At Room Temp: Gas","At Room Temp: Liquid","At Room Temp: Solid","Artifically Prepared" };
	text(black on light_gray);
	
	int i,j, g, Num;
	
	Box(2,8,1,63,26,black on light_cyan,2,dark_gray on light_gray);
	
	gotoXY(30,0,"\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xBF");
	gotoXY(30,1,"\xB5 PERIODIC TABLE \xC6");
	gotoXY(30,2,"\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xD9");
	gotoXY(12,4);
	cout<<'\xDA';
	for (i=13;i<64;i+=3)
	{
		gotoXY(i,4);
		cout << "\xC4\xC4\xC2";
	}
	cout << "\xC4\xC4\xBF";
	for(j=5;j<23;j+=2)
	{
		gotoXY(12,j);
		cout << "\xB3   ";
		gotoXY(12,j+1);
		cout << "\xc3\xc4\xC4";

		for (i=15;i<64;i+=3)
		{
			gotoXY(i,j);
			cout << "\xB3  ";
			gotoXY(i,j+1);
			cout << "\xC5\xc4\xC4";
		}
		gotoXY(66,j , "\xB3");
		gotoXY(66,j+1,"\xB4");
	}

	gotoXY(12,23);
	cout << '\xB3';
	gotoXY(12,24);
	cout << '\xC0';

	for (i=13;i<65;i+=3)
	{
		gotoXY(i,23);
		cout << "  \xB3";
		gotoXY(i,24);
		cout << "\xC4\xC4\xC1";
	}
	gotoXY(66,24);
	cout << '\xD9';

	gotoXY(12,18);
	cout << '\xC0';
	gotoXY(12,19);
	cout << " ";
	gotoXY(12,20);
	cout << '\xDA';

	for (i=13;i<65;i+=3)
	{
		gotoXY(i,18);
		cout << "\xC4\xC4\xC1";
		gotoXY(i,19);
		cout << "   ";
		gotoXY(i,20);
		cout << "\xC4\xC4\xC2";
	}
	gotoXY(66,18);
	cout << '\xD9';
	gotoXY(66,19);
	cout << " ";
	gotoXY(66,20);
	cout << '\xBF';

	gotoXY(15,4,"\xBF  ");
	gotoXY(18,8,"\xB4  ");
	
	for (i=16;i<63;i++)
	{
		gotoXY(i,4," ");
		gotoXY(i,5," ");
		if(i>48 && i%3==0)
			gotoXY(i,6,"\xC2");
	}
	gotoXY(63,4,"\xDA");

	gotoXY(18,6,"\xBF  ");
	for (i=21;i<48;i++)
	{
		gotoXY(i,6," ");
		gotoXY(i,7," ");
		gotoXY(i,8," ");
		gotoXY(i,9," ");
		
	}
	
	gotoXY(48,6,"\xDA");
	gotoXY(48,8,"\xC3");
	
	for (i=19;i<48;i++)
	{
		gotoXY(i,7," ");
		gotoXY(i,9," ");
	}

	for(i=21;i<46;i+=3)
		gotoXY(i,10,"\xC2");

	gotoXY(12,20);
	cout << "\xDA\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4";
	gotoXY(15,22);
	cout << "\xC4\xC4\xC4\xC4\xC4\xC4\xC4";
	gotoXY(12,24);
	cout << "\xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4";
	gotoXY(13,21);
	cout<<"Lanthanides";
	gotoXY(14,23);
	cout<<"Actinides";

	for(i=0;i<118;i++)
		gotoXY(Number[i].x, Number[i].y, Number[i].Symbol);

	Console::SetWindowSize(width, height );
	
	i=x,j=y;
	
	do
	{
		Box(1,22,4,22,5,dark_gray on light_yellow,2,dark_cyan on light_cyan);
		text(black on light_gray);
		gotoXY(12,28, "ARROWS TO SCROLL - ENTER TO SELECT ELEMENT - ESC TO EXIT.");
		for(int a=0;a<118;a++)
		{
			gotoXY(Number[a].x,Number[a].y);
			text(black on light_cyan);
			cout << Number[a].Symbol;
			if(i==Number[a].x && j == Number[a].y)
			{
				text(dark_gray on light_yellow);
				gotoXY(33-(Element_Group[Number[a].Element_Type].length()/2),5,Element_Group[Number[a].Element_Type]);
				gotoXY(33-(State[Number[a].Element_State].length()/2),6,State[Number[a].Element_State]);
				gotoXY(33-(Number[a].Name.length()/2),7, Number[a].Name);
				gotoXY(Number[a].x,Number[a].y);
				text(light_red on light_cyan);
				cout << Number[a].Symbol;
				Num = Number[a].Atomic_Number-1;
			}
		}
		gotoXY(i,j);
		g =_getch();
		switch(g)
		{
		case ESC:
			return;
		case DOWN:
			{
				if(j+2 <=23)
					j+=2;
				if(j==19)
				{
					if(i<25)
						i=25;
					j+=2;
				}
				break;
			}
		case RIGHT:
			{
				if(j==5 && i==13)
				{
					i=64;
					break;
				}
				if((j>5 && j<=9) && i==16)
				{
					i=49;
					break;
				}
				if(j>=11 || ((j>=7 && j<=9) && (i>=13 && i<16)) ||  ((j>=7 && j<=9) && (i>=49 && i<64)) )
				{
				if(i+3<=64)
					i+=3;
				}
				break;
			}
		case LEFT:
			{
				if(j==5 && i==64)
				{
					i=13;
					break;
				}
				if((j>5 && j<=9) && i==49)
				{
					i=16;
					break;
				}
				if(j>=11 || ((j>=7 && j<=9) && (i>13 && i<=16)) ||  ((j>=7 && j<=9) && (i>49 && i<=64)) )
				{
					if(i-3 >=13 && j<18)
					i-=3;
				else
					if(i-3 >=25 && j>18)
						i-=3;
				}
				break;
			}
		case UP:
			{
				if(j>11 || ((j>7 && i>=13 && i<=16) ||  (j>7 && (i>=49 && i<=64) )) || i==13 && j==7 || i==64 && j==7 )
				{
					if(j-2 >= 5 )
					j-=2;
				if(j==19)
					j-=2;
				}
				break;
			}
		case ENTER:
			{
				Show_Element(Number, Num, i, j );
			}
		} 
	} while(g!=ESC);}
