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
    cout << setw(90) << "W" << "elcome to levelsect!" << endl;
    cout << setw(88) << "P" << "lease select your level" << endl;
    Sleep(3000);
    cout << endl;
    cout << setw(94) << "1" << ". Level one" << endl;
    cout << setw(94) << "2" << ". Level two" << endl;
    cout << setw(94) << "3" << ". Level three" << endl;
    cout << setw(94) << "4" << ". Level four" << endl;
    cout << setw(94) << "5" << ". Level five" << endl;
    cout << setw(94) << "6" << ". Level six" << endl;
    cout << setw(94) << "7" << ". Level seven" << endl;
    cout << setw(94) << "8" << ". Level eight" << endl;
    cout << setw(94) << "9" << ". Level nine" << endl;
    cout << setw(94) << "10" << ". Level ten" << endl;
    cout << setw(94) << "11" << ". Level eleven" << endl;
    cout << setw(94) << "12" << ". Level twelve" << endl;
    cout << setw(94) << "13" << ". Level thirteen" << endl;
    cout << setw(94) << "14" << ". Level fourteen" << endl;
    cout << setw(94) << "15" << ". Level fifteen" << endl;

    cout << setw(94) << "8" << ". Level eight" << endl;
    cout << endl;
    cout << setw(92) << "Y" << "our choice: ";
    cin >> numsel;
    if (numsel == 1)
    {
        game();
    }
    else if (numsel == 2)
    {
        cout << "game5()";
    }
    else if (numsel == 2)
    {
        cout << "game5()";
    }
    else if (numsel == 2)
    {
        cout << "game5()";
    }
    else if (numsel == 2)
    {
        cout << "game5()";
    }
    else if (numsel == 2)
    {
        cout << "game5()";
    }
    else if (numsel == 2)
    {
        cout << "game5()";
    }
    else if (numsel == 2)
    {
        cout << "game5()";
    }

}
