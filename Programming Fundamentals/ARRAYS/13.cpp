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

		switch(ch)
		{
			case 'h': //If the character entered is 'h'
				cout << "[Help] Commands: 'h', 'e', 'q'.\n"; //Do the 'h' stuff
				break;
			case 'e': //If the character entered is 'e'
				cout << "[Execute] Add custom functionality here.\n"; //Do the 'e' stuff
				break;
			case 'q': //If the character entered is 'q'
				cout << "[Quit] Exiting upon another keypress.\n"; //Do the 'q' stuff
				break;
		}

		if(ch == 'q') { break; } //Not extremely efficient, but another check outside 'switch' to break from the loop if ch was 'q'

		cout << "\n"; //Output a new line, purely for presentation
	}

	return 0;
}

