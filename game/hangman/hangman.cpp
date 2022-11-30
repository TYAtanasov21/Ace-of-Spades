#include <iostream>
#include <Windows.h>
#include <iomanip>


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
		system("cls");
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
	system("color 3");
	cout << endl;
	cout << endl;
	cout << endl;
	cout << R"(
			  _    _                    _____ _      _ 
			 | |  | |                  / ____(_)    | |
			 | |__| | __ _ _ __   __ _| |  __ _ _ __| |
			 |  __  |/ _` | '_ \ / _` | | |_ | | '__| |
			 | |  | | (_| | | | | (_| | |__| | | |  | |
			 |_|  |_|\__,_|_| |_|\__, |\_____|_|_|  |_|
			                      __/ |                
			                     |___/                                                                                                                                                                                                                                                       
 )" << endl;
	cout << setw(57) << "Welcome to hanggirl!" << endl;
	cout << setw(62)<< "If you want to play the game type: Y" << endl;
	cout << setw(60) << "If you want to quit type: N" << endl;
	cout << setw(54) << "Your choice";

	yesOrNo();
}
int main()
{
	mainMenu();
	return 1;
}
