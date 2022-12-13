#include <iostream>
#include <string>
#include <windows.h>
#include <sys/types.h>
#include <iomanip>

#include "GameMenu.h"
#include "MenuUse.h"
#include "SelectLevel.h"
using namespace std;

void mainMenu()
{
    int menuAction;
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
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;

    cout << setw(45) << "For ";
    Sleep(50);
    cout << "full ";
    Sleep(50);

    cout << "experience ";
    Sleep(50);
    cout << "press ";
    Sleep(50);
    cout << "F11";
    Sleep(50);
    cout << "!";
    Sleep(50);
    Sleep(3000);
    system("cls");

    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << R"(                                                                                             __    _____                 _           
                                                                      /\                    / _|  / ____|               | |          
                                                                     /  \   ___ ___    ___ | |_  | (___  _ __   __ _  __| | ___  ___ 
                                                                    / /\ \ / __/ _ \  / _ \|  _|  \___ \| '_ \ / _` |/ _` |/ _ \/ __|
                                                                   / ____ \ (_|  __/ | (_) | |    ____) | |_) | (_| | (_| |  __/\__ \
                                                                  /_/    \_\___\___|  \___/|_|   |_____/| .__/ \__,_|\__,_|\___||___/
                                                                                                        | |                          
                                                                                                        |_|                          
 )" << endl;
    cout << endl;;
    cout << setw(90) << "W" << "elcome to hangman!" << endl;
    cout << " " << endl;
    cout << setw(90) << "1" << ". Access the game." << endl;
    cout << setw(90) << "2" << ". View the rules." << endl;
    cout << setw(90) << "3" << ". View the credits." << endl;
    cout << endl;
    cout << setw(90) << "Y" << "our choice: ";
    cin >> menuAction;
    if (menuAction == 1)
    {

        system("CLS");
        registration();
        system("CLS");
        gameselect();
    }
    else if (menuAction == 2)
    {
        system("CLS");
        rules();
    }
    else if (menuAction == 3)
    {
        system("cls");
        credits();
    }
}