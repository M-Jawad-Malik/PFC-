#include <iostream>

using namespace std;

int main()
{
	char ch; //Create a char variable called 'ch'

	while(true)
	{
		cout << ">"; //Output a prompt character to let the user know that they should type here...
					 //even though we only want one character to be entered in this program
		cin >> ch; //Get a character and put it in 'ch'

		if(ch == 'h') //If the character entered is 'h'
		{
			cout << "[Help] Commands: 'h', 'e', 'q'.\n"; //Do the 'h' stuff
		}
		else if(ch == 'e') //If the character entered is 'e'
		{
			cout << "[Execute] Add custom functionality here.\n"; //Do the 'e' stuff
		}
		else if(ch == 'q') //If the character entered is 'q'
		{
			cout << "[Quit] Exiting upon another keypress.\n"; //Do the 'q' stuff
			break; //Break from the (otherwise) infinite loop
		}

		cout << "\n"; //Output a new line, purely for presentation
	}

	return 0;}
