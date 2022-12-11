#include <iostream>

#include <string>
#include <windows.h>
#include <sys/types.h>
#include <iomanip>

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
    cout << setw(94) << "1" << ". Level two" << endl;
    cout << setw(94) << "3" << ". Level three" << endl;
    cout << setw(94) << "4" << ". Level four" << endl;
    cout << setw(94) << "5" << ". Level five" << endl;
    cout << setw(94) << "6" << ". Level six" << endl;
    cout << setw(94) << "7" << ". Level seven" << endl;
    cout << setw(94) << "8" << ". Level eight" << endl;
    cout << endl;
    cout << setw(92) << "Y" << "our choice: ";
    cin >> numsel;
    if (numsel == 1)
    {
        game1();
    }
    else if (numsel == 2)
    {
        game2();
    }
    else if (numsel == 2)
    {
        game3();
    }
    else if (numsel == 2)
    {
        game4();
    }
    else if (numsel == 2)
    {
        game5();
    }
    else if (numsel == 2)
    {
        game6();
    }
    else if (numsel == 2)
    {
        game7();
    }
    else if (numsel == 2)
    {
        game8();
    }

}

// create registration form
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
        cout << setw(90) <<"T" << "o begin with please enter your username : ";
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
        cout << setw(90) << "G"<<"reat " << username << ", we welcome you to Hanggirl!";
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
        cout<< setw(100) << "L"<<"oading. . .";
        Sleep(3000);
        gameselect();
}
// function for credits
void credits()
{
    cout << endl;
    cout << endl;
    cout << setw(100) << "C";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << "i";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << ":" << endl;
    Sleep(50);
    cout << setw(90) << "1.";
    Sleep(50);
    cout << "S";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << "m";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "i";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << " - ";
    Sleep(100);
    cout << "T";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "A";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "v." << endl;

    Sleep(100);
    cout << setw(90) << "2.";
    Sleep(50);
    cout << "Q";
    Sleep(50);
    cout << "A";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "g";
    Sleep(50);
    cout << "i";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << " - ";
    Sleep(100);
    cout << "T";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << " M";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << "j";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "v." << endl;

    Sleep(100);
    cout << setw(80) << "3.";
    Sleep(50);
    cout << "B";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "k";
    Sleep(50);
    cout << "-";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << " D";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "v";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "l";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "p";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << " - ";
    Sleep(100);
    cout << "A";
    Sleep(50);
    cout << "p";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "l";
    Sleep(50);
    cout << " K";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << "p";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "v";
    Sleep(50);
    cout << " a";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << " I";
    Sleep(50);
    cout << "v";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << " D";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "h";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "v.";

    Sleep(200);

    int a;
    cout << setw(100) << "Enter 1 to go back ";
    cin >> a;
    if (a == 1)
    {
        system("cls");
    }
}

// the real game
void game()
{
    cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
    cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
    cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
    cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
    cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
    cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
    cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
    cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
    cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
    cout << setw(18) << "          @,/   &     .           &@@@@@           .                    " << endl;
    cout << setw(18) << "             .#,   #,            (@@@@@@                                  " << endl;
    cout << setw(18) << "                     /##          @@@@@(                                " << endl;
    cout << setw(18) << "                                 @@@@@@@                            " << endl;
    cout << setw(18) << "                                .@@@@@@@@                                 " << endl;
    cout << setw(18) << "                                @@@@@@@@@@,                          " << endl;
    cout << setw(18) << "                               @@@@@@@@@@@                         " << endl;
    cout << setw(18) << "                              @@@@@@@@@@@@@@                           " << endl;
    cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
    cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
    cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
    cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
        << "nter letter: ";
    char letter;
    int counter = 0, counter1 = 0, counter2 = 0, counter3 = 0, exitnumber, exitnumber1;
    for (int i = 0; i < 40; i++)
    {
        cin >> letter;
        if (int(letter) != 84 && int(letter) != 82 && int(letter) != 69)
        {
            counter++;
        }
        if (int(letter) == 84 or int(letter) == 82 or int(letter) == 69)
        {
            if (letter == 'T')
            {
                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =1 ," << endl;
                Sleep(300);

                counter1 = 1;
            }
            if (letter == 'E')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =3,4 ," << endl;
                Sleep(300);
                counter2 = 2;
            }
            if (letter == 'R')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =2 ," << endl;
                Sleep(300);
                counter3 = 1;
            }
        }
        if ((counter1 + counter2 + counter3) == 4)
        {
            system("cls");
            cout << setw(100) << "G" << "ood job";
            cout << setw(100) << "C" << "lick 1 to continue";
            cin >> exitnumber;
            {
                if (exitnumber == 1)
                {
                    break;
                }
            }
        }
        if (counter == 1)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                               " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                " << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@             " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 2)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $$#@*&^%#@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 $^        &% " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 *%          %#" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              ^%            ^$" << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 3)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $$#@*&^%#@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 $^  %$#@  &% " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 *%   %$#@   %#" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              ^%    %$#@    ^$" << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 4)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $$#@*&^%#@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 $^  %$#@  &% " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 *%   %$#@   %#" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              ^%    %$#@    ^$" << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  &" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 $      " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              $#$         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 5)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $$#@*&^%#@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 $^  %$#@  &% " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 *%   %$#@   %#" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              ^%    %$#@    ^$" << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  &  $" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 $  %    " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              $#$  #@*       " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
            Sleep(200);
            system("cls");
            cout << setw(100) << "C" << "lick 1 for new word";
            cin >> exitnumber1;
            if (exitnumber1 == 1)
            {
                break;
            }
        }
    }
}
void game1()
{
    {
        system("cls");
        cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
        cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | ";
        cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 9 letters      | ";
        cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "|" << "    This is dream job to most kids  |";
        cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(105) << "-" << "-------------------------------------";
        cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
        cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
        cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
        cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
        cout << setw(18) << "          @,/   &     .           &@@@@@           .                    " << endl;
        cout << setw(18) << "             .#,   #,            (@@@@@@                                  " << endl;
        cout << setw(18) << "                     /##          @@@@@(                                " << endl;
        cout << setw(18) << "                                 @@@@@@@                            " << endl;
        cout << setw(18) << "                                .@@@@@@@@                                 " << endl;
        cout << setw(18) << "                                @@@@@@@@@@,                          " << endl;
        cout << setw(18) << "                               @@@@@@@@@@@                         " << endl;
        cout << setw(18) << "                              @@@@@@@@@@@@@@                           " << endl;
        cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
        cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
        cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
        cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
            << "nter letter: ";
    }
    char letter;
    int counter = 0, counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0, counter6 = 0, counter7 = 0, exitnumber;
    for (int i = 0; i < 40; i++)
    {
        cin >> letter;
        if (letter != 'A' && letter != 'S' && letter != 'T' && letter != 'R' && letter != 'O' && letter != 'N' && letter != 'A' && letter != 'U' && letter != 'T')
        {
            counter++;
        }
        if (letter == 'A' || letter == 'S' || letter == 'T' || letter == 'R' || letter == 'O' || letter == 'N' || letter == 'U')
        {
            if (letter == 'A')
            {
                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =1 ,7 ," << endl;
                Sleep(300);

                counter1 = 2;
            }

            if (letter == 'S')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =2 ," << endl;
                Sleep(300);
                counter2 = 1;
            }
            if (letter == 'T')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =3 ," << endl;
                Sleep(300);
                counter3 = 2;
            }
            if (letter == 'R')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =4 ," << endl;
                Sleep(300);
                counter4 = 1;
            } if (letter == 'O')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =4 ," << endl;
                Sleep(300);
                counter5 = 1;
            }
            if (letter == 'N')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =6 ," << endl;
                Sleep(300);
                counter6 = 1;
            }
            if (letter == 'U')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =8 ," << endl;
                Sleep(300);
                counter7 = 1;
            }
        }
        if ((counter1 + counter2 + counter3 + counter4 + counter5 + counter6 + counter7) == 9)
        {
            system("cls");
            cout << setw(100) << "G" << "ood job";
            cout << setw(100) << "C" << "lick 1 to continue";
            cin >> exitnumber;
            {
                if (exitnumber == 1)
                {
                    break;
                }
            }
        }
        if (counter == 1)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 9 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "|" << "    This is dream job to most kids  |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                                 " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                          " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                         " << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@                           " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: " << endl;
        }
        if (counter == 2)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 9 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "|" << "    This is dream job to most kids  |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#        %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#          @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@            !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 3)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 9 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "|" << "    This is dream job to most kids  |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 4)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 9 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "|" << "    This is dream job to most kids  |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  %" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 !      " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              &$@         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 5)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 9 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "|" << "    This is dream job to most kids  |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  %  &" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 !  $    " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              &$@  @#$       " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
    }
}
void game2()
{
    system("cls");
    cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
    cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << " You can't play football without ?  | ";
    cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
    cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
    cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
    cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
    cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
    cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
    cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
    cout << setw(18) << "          @,/   &     .           &@@@@@           .                    " << endl;
    cout << setw(18) << "             .#,   #,            (@@@@@@                                  " << endl;
    cout << setw(18) << "                     /##          @@@@@(                                " << endl;
    cout << setw(18) << "                                 @@@@@@@                            " << endl;
    cout << setw(18) << "                                .@@@@@@@@                                 " << endl;
    cout << setw(18) << "                                @@@@@@@@@@,                          " << endl;
    cout << setw(18) << "                               @@@@@@@@@@@                         " << endl;
    cout << setw(18) << "                              @@@@@@@@@@@@@@                           " << endl;
    cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
    cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
    cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
    cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
        << "nter letter: ";
    char letter;
    int counter = 0, counter1 = 0, counter2 = 0, counter3 = 0, exitnumber, exitnumber1 = 1;
    for (int i = 0; i < 40; i++)
    {
        cin >> letter;
        if (letter != 'B' && letter != 'A' && letter != 'L')
        {
            counter++;
        }
        if (letter == 'B' or letter == 'A' or letter == 'L')
        {
            if (letter == 'B')
            {
                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =1" << endl;
                Sleep(300);

                counter1 = 1;
            }
            if (letter == 'A')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =2" << endl;
                Sleep(300);
                counter2 = 1;
            }
            if (letter == 'L')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " =3 ,4" << endl;
                Sleep(300);
                counter3 = 2;
            }
        }
        if ((counter1 + counter2 + counter3) == 4)
        {
            system("cls");
            cout << setw(100) << "G" << "ood job";
            cout << setw(100) << "C" << "lick 1 to continue";
            cin >> exitnumber;
            {
                if (exitnumber == 1)
                {
                    break;
                }
            }
        }
        if (counter == 1)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << " You can't play football without ?  | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                               " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                " << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@             " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 2)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << " You can't play football without ?  | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $$#@*&^%#@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 $^        &% " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 *%          %#" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              ^%            ^$" << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 3)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << " You can't play football without ?  | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $$#@*&^%#@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 $^  %$#@  &% " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 *%   %$#@   %#" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              ^%    %$#@    ^$" << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 4)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << " You can't play football without ?  | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $$#@*&^%#@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 $^  %$#@  &% " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 *%   %$#@   %#" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              ^%    %$#@    ^$" << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  &" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 $      " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              $#$         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 5)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << " You can't play football without ?  | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(101) << "|" << "       Your word has 4 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(105) << "-" << "-------------------------------------";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << endl;
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           &%&%&#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       &%&%&#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       &%&%&#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         *^   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $$#@*&^%#@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 $^  %$#@  &% " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 *%   %$#@   %#" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              ^%    %$#@    ^$" << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  &  $" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 $  %    " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              $#$  #@*       " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
            Sleep(200);
            system("cls");
            cout << setw(100) << "C" << "lick 1 for new word";
            cin >> exitnumber1;
            if (exitnumber1 == 1)
            {
                break;
            }
        }
    }
}
//
//
//
//
void game3()
{
    {
        system("cls");
        cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(109) << "-" << "----------------------------------------";
        cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(105) << "|" << "        Famous German car brand        | ";
        cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(98) << "|" << "         Your word has 8 letters       | ";
        cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "The emblem looks like tree pointed star|";
        cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "----------------------------------------";
        cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
        cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
        cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
        cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
        cout << setw(18) << "          @,/   &     .           &@@@@@           .                    " << endl;
        cout << setw(18) << "             .#,   #,            (@@@@@@                                  " << endl;
        cout << setw(18) << "                     /##          @@@@@(                                " << endl;
        cout << setw(18) << "                                 @@@@@@@                            " << endl;
        cout << setw(18) << "                                .@@@@@@@@                                 " << endl;
        cout << setw(18) << "                                @@@@@@@@@@,                          " << endl;
        cout << setw(18) << "                               @@@@@@@@@@@                         " << endl;
        cout << setw(18) << "                              @@@@@@@@@@@@@@                           " << endl;
        cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
        cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
        cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
        cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
            << "nter letter: ";
    }
    char letter;
    int counter = 0, counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0, counter6 = 0, counter7 = 0, exitnumber;
    for (int i = 0; i < 40; i++)
    {
        cin >> letter;
        if (letter != 'M' && letter != 'E' && letter != 'R' && letter != 'C' && letter != 'D' && letter != 'S')
        {
            counter++;
        }
        if (letter == 'M' || letter == 'E' || letter == 'R' || letter == 'C' || letter == 'D' || letter == 'S')
        {
            if (letter == 'M')
            {
                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 1" << endl;
                Sleep(300);

                counter1 = 1;
            }

            if (letter == 'E')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 2 , 5, 7" << endl;
                Sleep(300);
                counter2 = 3;
            }
            if (letter == 'R')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 3" << endl;
                Sleep(300);
                counter3 = 1;
            }
            if (letter == 'C')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 4" << endl;
                Sleep(300);
                counter4 = 1;
            } if (letter == 'D')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 6" << endl;
                Sleep(300);
                counter5 = 1;
            }
            if (letter == 'S')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 8" << endl;
                Sleep(300);
                counter6 = 1;
            }
        }
        if ((counter1 + counter2 + counter3 + counter4 + counter5 + counter6) == 8)
        {
            system("cls");
            cout << setw(100) << "G" << "ood job";
            cout << setw(100) << "C" << "lick 1 to continue";
            cin >> exitnumber;
            {
                if (exitnumber == 1)
                {
                    break;
                }
            }
        }
        if (counter == 1)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(109) << "-" << "----------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(105) << "|" << "        Famous German car brand        | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(98) << "|" << "         Your word has 8 letters       | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "The emblem looks like tree pointed star|";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "----------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                                 " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                          " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                         " << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@                           " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 2)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(109) << "-" << "----------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(105) << "|" << "        Famous German car brand        | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(98) << "|" << "         Your word has 8 letters       | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "The emblem looks like tree pointed star|";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "----------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#        %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#          @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@            !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 3)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(109) << "-" << "----------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(105) << "|" << "        Famous German car brand        | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(98) << "|" << "         Your word has 8 letters       | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "The emblem looks like tree pointed star|";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "----------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 4)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(109) << "-" << "----------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(105) << "|" << "        Famous German car brand        | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(98) << "|" << "         Your word has 8 letters       | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "The emblem looks like tree pointed star|";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "----------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  %" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 !      " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              &$@         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 5)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(109) << "-" << "----------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(105) << "|" << "        Famous German car brand        | ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(98) << "|" << "         Your word has 8 letters       | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "The emblem looks like tree pointed star|";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "----------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  %  &" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 !  $    " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              &$@  @#$       " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
    }
}
//
//
//
//
void game4()
{
    {
        system("cls");
        cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(111) << "-" << "-------------------------------------";
        cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "People love going there in the winter| ";
        cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(100) << "|" << "        Your word has 8 letters      | ";
        cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(104) << "|" << "       It's usually snowing there    |";
        cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(104) << "-" << "--------------------------------------";
        cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
        cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
        cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
        cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
        cout << setw(18) << "          @,/   &     .           &@@@@@           .                    " << endl;
        cout << setw(18) << "             .#,   #,            (@@@@@@                                  " << endl;
        cout << setw(18) << "                     /##          @@@@@(                                " << endl;
        cout << setw(18) << "                                 @@@@@@@                            " << endl;
        cout << setw(18) << "                                .@@@@@@@@                                 " << endl;
        cout << setw(18) << "                                @@@@@@@@@@,                          " << endl;
        cout << setw(18) << "                               @@@@@@@@@@@                         " << endl;
        cout << setw(18) << "                              @@@@@@@@@@@@@@                           " << endl;
        cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
        cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
        cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
        cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
            << "nter letter: ";
    }
    char letter;
    int counter = 0, counter1 = 0, counter2 = 0, counter3 = 0, counter4 = 0, counter5 = 0, counter6 = 0, counter7 = 0, exitnumber;
    for (int i = 0; i < 40; i++)
    {
        cin >> letter;
        if (letter != 'M' && letter != 'O' && letter != 'U' && letter != 'N' && letter != 'T' && letter != 'A' && letter != 'I')
        {
            counter++;
        }
        if (letter == 'M' || letter == 'O' || letter == 'U' || letter == 'N' || letter == 'T' || letter == 'A' || letter == 'I')
        {
            if (letter == 'M')
            {
                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 1" << endl;
                Sleep(300);

                counter1 = 1;
            }

            if (letter == 'O')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 2" << endl;
                Sleep(300);
                counter2 = 1;
            }
            if (letter == 'U')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 3" << endl;
                Sleep(300);
                counter3 = 1;
            }
            if (letter == 'N')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 4, 8" << endl;
                Sleep(300);
                counter4 = 2;
            } if (letter == 'T')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 5" << endl;
                Sleep(300);
                counter5 = 1;
            }
            if (letter == 'A')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 6" << endl;
                Sleep(300);
                counter6 = 1;
            }
            if (letter == 'I')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(100) << letter << " = 7" << endl;
                Sleep(300);
                counter7 = 1;
            }
        }
        if ((counter1 + counter2 + counter3 + counter4 + counter5 + counter6 + counter7) == 8)
        {
            system("cls");
            cout << setw(100) << "G" << "ood job";
            cout << setw(100) << "C" << "lick 1 to continue";
            cin >> exitnumber;
            {
                if (exitnumber == 1)
                {
                    break;
                }
            }
        }
        if (counter == 1)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(111) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "People love going there in the winter| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(100) << "|" << "        Your word has 8 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(104) << "|" << "       It's usually snowing there    |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(104) << "-" << "--------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                                 " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                          " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                         " << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@                           " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 2)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(111) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "People love going there in the winter| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(100) << "|" << "        Your word has 8 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(104) << "|" << "       It's usually snowing there    |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(104) << "-" << "--------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#        %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#          @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@            !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 3)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(111) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "People love going there in the winter| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(100) << "|" << "        Your word has 8 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(104) << "|" << "       It's usually snowing there    |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(104) << "-" << "--------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                 " << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                       " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,                         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 4)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(111) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "People love going there in the winter| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(100) << "|" << "        Your word has 8 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(104) << "|" << "       It's usually snowing there    |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(104) << "-" << "--------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  %" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 !      " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              &$@         " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
        if (counter == 5)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(111) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "People love going there in the winter| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(100) << "|" << "        Your word has 8 letters      | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(104) << "|" << "       It's usually snowing there    |";
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(104) << "-" << "--------------------------------------";
            cout << setw(18) << "*    .,     @@@@@@   ,/     @@@.     @@@%      @..   ##   *( @@@ ,   ," << endl;
            cout << setw(18) << "./#.        @@@*     /@@%  .    @@,  @@@,         %  ,*        #@@&     &" << endl;
            cout << setw(18) << "(@&                @    &        *@@@@@@(           # * *        ||   " << endl;
            cout << setw(18) << "           @@. (      (           @@@@@&           &(    *       ||  " << endl;
            cout << setw(18) << "          @,/   &     .           &@@@@@           .           #@$$@#         " << endl;
            cout << setw(18) << "             .#,   #,            (@@@@@@                       #@$$@#           " << endl;
            cout << setw(18) << "                     /##          @@@@@(                       #@$$@#         " << endl;
            cout << setw(18) << "                                 @@@@@@@                         %#   " << endl;
            cout << setw(18) << "                                .@@@@@@@@                    $#@$#!&^%@             " << endl;
            cout << setw(18) << "                                @@@@@@@@@@,                 @#  %@$#  %$ " << endl;
            cout << setw(18) << "                               @@@@@@@@@@@                 &#   %@$#   @$" << endl;
            cout << setw(18) << "                              @@@@@@@@@@@@@@              $@    %@$#    !# " << endl;
            cout << setw(18) << "                            &@@@@@@@@@@@@@@@@#                  %  &" << endl;
            cout << setw(18) << "                           &@@@@@@@@@@@@@@@@@@(                 !  $    " << endl;
            cout << setw(18) << "                         *@%%@@@@@@@@@@@@@@@@@@,              &$@  @#$       " << endl;
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "E"
                << "nter letter: ";
        }
    }
}
// rules function
void rules()
{
    cout << endl;
    cout << endl;
    cout << setw(100) << "R";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << "l";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << ":" << endl;
    Sleep(50);
    cout << setw(95) << " 1";
    Sleep(50);
    cout << ".";
    Sleep(50);
    cout << "R";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "l";
    Sleep(50);
    cout << "l";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "h";
    Sleep(50);
    cout << "i";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "s" << endl;
    Sleep(50);
    cout << setw(75) << "2";
    Sleep(50);

    cout << ".";
    Sleep(50);
    cout << "Y";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "h";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "v";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "5";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "m";
    Sleep(50);
    cout << "p";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "g";
    Sleep(50);
    cout << "u";
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
    cout << "w";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "h";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "w";
    Sleep(50);
    cout << "i";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "y";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "l";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "e" << endl;
    Sleep(50);
    cout << setw(60) << "3";
    Sleep(50);
    cout << ".";
    Sleep(50);
    cout << "I";
    Sleep(50);
    cout << "f";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "y";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "g";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "i";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "y";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "l";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "m";
    Sleep(50);
    cout << "p";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << ",";
    Sleep(50);
    cout << "b";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "i";
    Sleep(50);
    cout << "f";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "y";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "g";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "r";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "c";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "y";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "u";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "d";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "'";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "l";
    Sleep(50);
    cout << "o";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << "s";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "n";
    Sleep(50);
    cout << "y";
    Sleep(50);
    cout << " ";
    Sleep(50);
    cout << "a";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "t";
    Sleep(50);
    cout << "e";
    Sleep(50);
    cout << "m";
    Sleep(50);
    cout << "p";
    Sleep(50);
    cout << "t" << endl;
    Sleep(100);
    int a;
    cout << setw(113) << "Enter 1 to go back ";
    cin >> a;
    if (a == 1)
    {
        system("cls");
    }
}
// menu function
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
    cout << setw(100) << "A";
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
                                                                               _    _                   __  __             
                                                                              | |  | |                 |  \/  |            
                                                                              | |__| | __ _ _ __   __ _| \  / | __ _ _ __  
                                                                              |  __  |/ _` | '_ \ / _` | |\/| |/ _` | '_ \ 
                                                                              | |  | | (_| | | | | (_| | |  | | (_| | | | |
                                                                              |_|  |_|\__,_|_| |_|\__, |_|  |_|\__,_|_| |_|
                                                                                                   __/ |                   
                                                                                                  |___/                                                                                                                                                                                                                                                                       
 )" << endl;
    cout << setw(90) << "W" << "elcome to hanggirl!" << endl;
    cout << " " << endl;
    cout << setw(90) << "1" << ". Access the game." << endl;
    cout << setw(90) << "2" << ". Access the settings." << endl;
    cout << setw(90) << "3" << ". View the rules." << endl;
    cout << setw(90) << "4" << ". View the credits." << endl;
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
    else if (menuAction == 3)
    {
        system("CLS");
        rules();
        mainMenu();
    }
    else if (menuAction == 4)
    {
        system("cls");
        credits();
        mainMenu();
    }
}
int main()
{
    mainMenu();
}