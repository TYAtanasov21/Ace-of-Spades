#include <iostream>
#include <string>
#include <windows.h>
#include <sys/types.h>
#include <iomanip>

using namespace std;


void registration()
{
    string username;
    string yn;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << "T";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "A";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "h";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "g";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "m";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << " ";
    Sleep(50);

    cout << "r";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "g";
    Sleep(50);

    cout << "i";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "r";


    Sleep(2000);
    system("cls");
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(50) << "To begin with please enter your username : ";
    cin >> username;
    cout << endl;
    cout << endl;
    cout << setw(50) << "Are you sure you want to be called " << username  <<  " Y / N ?" << endl;
    cin >> yn;
    if (yn == "Y" || "y")
    {
        system("cls");
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << setw(50) << "Great " << username << " we welcome you to Hanggirl!";
        Sleep(1000);
        system("cls");
        cout << "Loading. . .";
        Sleep(2000);
        //  funkciq za igrata
    }
    else if (yn == "N" || "n")
    {
        registration();
    }
    else
    {
        cout << "Looks like the parameters you have entered aren't valid, please try again!";
    }

}



void pushX(int num) {
    for (int i = 0; i < num; i++)
        cout << " ";
}

void mainMenu()
{
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
    cout << "s" << endl;
    Sleep(50);
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
    if (menuaction == 1)
    {

        system("CLS");
        registration();
    }
}

int main()
{

    mainMenu();
}