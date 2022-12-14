#include <iostream>
#include <string>
#include <windows.h>
#include <sys/types.h>
#include <iomanip>

#include "SelectLevel.h"
#include "MenuUse.h"
#include "GameMenu.h"

using namespace std;

//function for the registration part of the game
void registration()
{
    string username;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(90) << "T";
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
    cout << setw(90) << "T" << "o begin with please enter your username : ";
    cin >> username;
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
    cout << setw(90) << "G" << "reat " << username << ", we welcome you to Hangman!";
    Sleep(3000);
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
    cout << setw(100) << "L" << "oading. . .";
    Sleep(3000);
    gameselect();
}

//function for the credits part
void credits()
{
    cout << endl;
    cout << endl;
    cout << R"(
                                                                                        _____              _ _ _       
                                                                                       / ____|            | (_) |      
                                                                                      | |     _ __ ___  __| |_| |_ ___ 
                                                                                      | |    | '__/ _ \/ _` | | __/ __|
                                                                                      | |____| | |  __/ (_| | | |_\__ \
                                                                                       \_____|_|  \___|\__,_|_|\__|___/
                                  
                                  )" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(90) << "1.";
    Sleep(1000);
    cout << "Scrum";
    Sleep(50);
    cout << " Trainer : ";
    Sleep(50);
    cout << "Todor ";
    Sleep(50);
    cout << "Atanasov" << endl;
    Sleep(50);
    cout << endl;
    cout << setw(90) << "2.";
    Sleep(1000);
    cout << "Back-";
    Sleep(50);
    cout << " End : ";
    Sleep(50);
    cout << "Ivan ";
    Sleep(50);
    cout << "Dochev" << endl;
    Sleep(50);
    cout << endl;
    cout << setw(90) << "3.";
    Sleep(90);
    cout << "Back-";
    Sleep(50);
    cout << "End : ";
    Sleep(50);
    cout << "Apostol ";
    Sleep(50);
    cout << "Kupenov" << endl;
    Sleep(50);
    cout << endl;
    cout << setw(90) << "4.";
    Sleep(1000);
    cout << "QA";
    Sleep(50);
    cout << " Engineer : ";
    Sleep(50);
    cout << "Teodor ";
    Sleep(50);
    cout << "Madjarov" << endl;
    Sleep(50);
    cout << endl;
    cout << endl;
    cout << endl;
    string userInput;
    cout << setw(119) << "Enter 'goBack' to go back: ";
    cin >> userInput;
    if (userInput == "goBack")
    {
        system("cls");
        mainMenu();
    }
    else
    {
        system("CLS");
        credits();
    }
}

//function for the rules part
void rules()
{
    cout << endl;
    cout << endl;
    cout << R"(    
                                                                                           ____        _                                                                           
                                                                                          |  __ \     | |          
                                                                                          | |__) |   _| | ___  ___ 
                                                                                          |  _  / | | | |/ _ \/ __|
                                                                                          | | \ \ |_| | |  __/\__ \
                                                                                          |_|  \_\__,_|_|\___||___/
                          
                          )" << endl;

    cout << endl;
    cout << endl;
    cout << endl;
    cout << setw(91) << "1." << "Input only CAPITAL letters!" << endl; 
    Sleep(50);
    cout << setw(95) << "2." << "Read all the hints!" << endl;
    Sleep(50);
    cout << setw(100) << "3." << "Have fun!" << endl;
    Sleep(50);
    string a;
    cout << endl;
    cout << endl;
    cout << setw(117) << "Enter goBack to go back: ";
    cin >> a;
    if (a == "goBack")
    {
        system("cls");
        mainMenu();
    }
    else
    {
        system("cls");
        rules();
    }
}

