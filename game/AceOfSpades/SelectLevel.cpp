#include <iostream>
#include <string>
#include <windows.h>
#include <sys/types.h>
#include <iomanip>


#include "SelectLevel.h"
#include "Games.h"

using namespace std;


void gameselect()
{
    system("CLS");
    int numsel;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << R"(
                                                                               _    _                   __  __             
                                                                              | |  | |                 |  \/  |            
                                                                              | |__| | __ _ _ __   __ _| \  / | __ _ _ __  
                                                                              |  __  |/ _` | '_ \ / _` | |\/| |/ _` | '_ \ 
                                                                              | |  | | (_| | | | | (_| | |  | | (_| | | | |
                                                                              |_|  |_|\__,_|_| |_|\__, |_|  |_|\__,_|_| |_|
                                                                                                   __/ |                   
                                                                                                  |___/                                                                                                                                                                                                                                                                       
 )" << endl;
    cout << setw(90) << "W" << "elcome to level select!" << endl;
    cout << setw(90) << "P" << "lease select your level." << endl;
    Sleep(3000);
    cout << endl;
    cout << setw(94) << "1" << ". Level one" << endl;
    cout << setw(94) << "2" << ". Level two" << endl;
    cout << setw(94) << "3" << ". Level three" << endl;
    cout << setw(94) << "4" << ". Level four" << endl;
    cout << setw(94) << "5" << ". Level five" << endl;
    cout << endl;
    cout << setw(92) << "Y" << "our choice: ";
    cin >> numsel;
    if (numsel == 1)
    {
        game();
    }
    else if (numsel == 2)
    {
        game1();
    }
    else if (numsel == 3)
    {
        game2();
    }
    else if (numsel == 4)
    {
        game3();
    }
    else if (numsel == 5)
    {
        game4();
    }
    else {
        system("cls");
        gameselect();
    }

}
