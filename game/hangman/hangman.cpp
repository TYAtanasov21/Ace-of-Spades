#include <iostream>
using namespace std;
void yesOrNo()
{
	char input;
	cin >> input;
	if (input == 'N')
	{
		cout << "Thank you for playing!";
	}
	if (input == 'Y')
	{
		cout << "You may continue!";
	}
	else if (input != 'N' && input != 'Y')
	{
		cout << "Incorrect input!" << endl;
		cout << "Please choose another option!" << endl;
		yesOrNo();
	}
}
void mainMenu()
{
	cout << "Welcome to hanggirl!" << endl;
	cout << "If you want to play the game type: Y" << endl;
	cout << "If you want to quit type: N" << endl;
	cout << "Type your answear:";
	yesOrNo();
}
int main()
{
	mainMenu();
	return 1;
}
