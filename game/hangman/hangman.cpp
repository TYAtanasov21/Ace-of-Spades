#include <iostream>
#include <string>
#include <windows.h>
#include <sys/types.h>
#include <iomanip>

using namespace std;

string name;

VOID WINAPI Sleep(
    _In_ DWORD dwMilliseconds
);

void pushX(int num) {
    for (int i = 0; i < num; i++)
        cout << " ";
}

void mainMenu()
{
    system("color 3");
    int menuaction;
    system("color 3");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << "A";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "f";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "S";
    Sleep(50);
    cout << "p";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << R"(♠️                                                                                                                                                                                                                                                     
 )";
    Sleep(2000);
    system("cls");




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
    cout << setw(52) << "Welcome to hanggirl!" << endl;
    cout << " " << endl;
    cout << setw(54) << "1. Access the game." << endl;
    cout << setw(58) << "2. Access the settings." << endl;
    cout << setw(53) << "3. View the rules." << endl;
    cout << setw(55) << "4. View the credits." << endl;
    cout << endl;
    cout << setw(55) << "Your choice: ";
    cin >> menuaction;
}





void hint()
{
    cout << setw(205) << "-------------------------------" << endl;
    cout << setw(206) << "|             Hints:            |" << endl;
    cout << setw(206) << "|    Your word have 4 letters   |" << endl;
    cout << setw(206) << "|You may see it everyday outside|" << endl;
    cout << setw(206) << "|      Its green and brown      |" << endl;
    cout << setw(205) << "-------------------------------" << endl;
}
void hang()
{
    cout << setw(205) << "*******" << endl;
    cout << setw(206) << "*" << endl;
    cout << setw(206) << "*" << endl;
    cout << setw(206) << "|You may see it everyday outside|" << endl;
    cout << setw(206) << "|      Its green and brown      |" << endl;
    cout << setw(205) << "-------------------------------" << endl;
}
int main()
{
    mainMenu();
}