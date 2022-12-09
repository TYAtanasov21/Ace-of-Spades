#include <iostream>
#include <string>
#include <windows.h>
#include <sys/types.h>
#include <iomanip>

using namespace std;

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
    cout << setw(50) << "Are you sure you want to be called " << username << " Y / N ?" << endl;
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
        //  call the func for the game
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

// function for credits
void credits()
{
    cout << endl;
    cout << endl;
    cout << setw(10) << "C";
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
    cout << setw(10) << "1.";
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
    cout << setw(10) << "2.";
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
    cout << setw(10) << "3.";
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
    cout << setw(200) << "Enter 1 to go back ";
    cin >> a;
    if (a == 1)
    {
        system("cls");
    }
}


void pushX(int num)
{
    for (int i = 0; i < num; i++)
        cout << " ";
}

// the real game
void game()
{
    cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
    cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
    cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 4 letters    | ";
    cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "-" << "-------------------------------------";
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
    cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
        << "nter letter: " << endl;
    char letter;
    int counter = 0, counter1 = 0, exitnumber;
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

                counter1++;
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
                cout << setw(50) << letter << " =3,4 ," << endl;
                Sleep(300);
                counter1++;
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
                cout << setw(50) << letter << " =2 ," << endl;
                Sleep(300);
                counter1++;
            }
        }
        if (counter1 == 3)
        {
            system("cls");
            cout << setw(50) << "G" << "ood job";
            cout << setw(50) << "C" << "lick 1 to continue";
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
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 4 letters    | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "-" << "-------------------------------------";
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: ";
        }
        if (counter == 2)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 4 letters    | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "-" << "-------------------------------------";
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: ";
        }
        if (counter == 3)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 4 letters    | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "-" << "-------------------------------------";
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: ";
        }
        if (counter == 4)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 4 letters    | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "-" << "-------------------------------------";
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: ";
        }
        if (counter == 5)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------";
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "You can see your word in this screen| ";
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 4 letters    | ";
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "-" << "-------------------------------------";
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: " << endl;
            cout << setw(100) << "YOU LOSE, FEEL FREE TO TRY AGAIN";
        }
    }
}
void game1()
{
    {
        system("cls");
        cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------" << endl;
        cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | " << endl;
        cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 9 letters    | " << endl;
        cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "    This is dream job to most kids  |" << endl;
        cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "-------------------------------------" << endl;
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
        cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
            << "nter letter: " << endl;
    }
    char letter;
    int counter = 0, counter1 = 0, exitnumber;
    for (int i = 0; i < 40; i++)
    {
        cin >> letter;
        if (letter != 'A' && letter != 'S' && letter != 'T' && letter != 'R' && letter != 'O' && letter != 'N' && letter != 'A' && letter != 'U' && letter != 'T')
        {
            counter++;
        }
        if (letter != 'A' || letter || 'S' && letter || 'T' && letter || 'R' && letter || 'O' && letter || 'N' && letter || 'A' && letter || 'U' && letter || 'T')
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

                counter1++;
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
                cout << setw(50) << letter << " =2 ," << endl;
                Sleep(300);
                counter1++;
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
                cout << setw(50) << letter << " =3 ," << endl;
                Sleep(300);
                counter1++;
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
                cout << setw(50) << letter << " =4 ," << endl;
                Sleep(300);
                counter1++;
            } if (letter == 'O')
            {

                system("cls");
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << setw(50) << letter << " =4 ," << endl;
                Sleep(300);
                counter1++;
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
                cout << setw(50) << letter << " =6 ," << endl;
                Sleep(300);
                counter1++;
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
                cout << setw(50) << letter << " =3 ,9" << endl;
                Sleep(300);
                counter1++;
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
                cout << setw(50) << letter << " =8 ," << endl;
                Sleep(300);
                counter1++;
            }
        }
        if (counter1 == 7)
        {
            system("cls");
            cout << setw(50) << "G" << "ood job";
            cout << setw(50) << "C" << "lick 1 to continue";
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
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------" << endl;
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | " << endl;
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 9 letters    | " << endl;
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "    This is dream job to most kids  |" << endl;
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "-------------------------------------" << endl;
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
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------" << endl;
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | " << endl;
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 9 letters    | " << endl;
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "    This is dream job to most kids  |" << endl;
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "-------------------------------------" << endl;
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: " << endl;
        }
        if (counter == 3)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------" << endl;
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | " << endl;
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 9 letters    | " << endl;
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "    This is dream job to most kids  |" << endl;
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "-------------------------------------" << endl;
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: " << endl;
        }
        if (counter == 4)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------" << endl;
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | " << endl;
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 9 letters    | " << endl;
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "    This is dream job to most kids  |" << endl;
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "-------------------------------------" << endl;
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: " << endl;
        }
        if (counter == 5)
        {
            system("cls");
            cout << setw(18) << "&  /    ,      ,#, # *  *.   @   .     @      ((@.//         ." << setw(112) << "-" << "-------------------------------------" << endl;
            cout << setw(18) << " % **     ,**@              %@@@@   @@    ( .#    ,    ** (.     &" << setw(108) << "|" << "     You can see it in the space    | " << endl;
            cout << setw(18) << "& @     ,#*      %( .  ,      @@ /   *@    * .,    ,,%     /&     %&,/&." << setw(102) << "|" << "    Your word has 9 letters    | " << endl;
            cout << setw(18) << " . .     @      @  *.       ## * &.   &@@@@@@@@@@@@@  ,%,  # /     ," << setw(102) << "|" << "    This is dream job to most kids  |" << endl;
            cout << setw(18) << "%              @@@@@@@@@@@@(  @,     %@@@@@#,@ &    @.@@@@@@&@   (  (" << setw(102) << "-" << "-------------------------------------" << endl;
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
            cout << setw(18) << "                        @*@%%@@@@@@@@@@@@@@@@@@,&                         " << setw(52) << "The word:" << setw(10) << "E"
                << "nter letter: " << endl;
        }
    }
}
// rules function
void rules()
{
    cout << endl;
    cout << endl;
    cout << setw(40) << "R";
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
    cout << setw(16) << "1";
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
    cout << setw(16) << "2";
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
    cout << setw(16) << "3";
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
    cout << setw(200) << "Enter 1 to go back ";
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
    cout << setw(55) << "Welcome to hanggirl!" << endl;
    cout << " " << endl;
    cout << setw(54) << "1. Access the game." << endl;
    cout << setw(58) << "2. Access the settings." << endl;
    cout << setw(53) << "3. View the rules." << endl;
    cout << setw(55) << "4. View the credits." << endl;
    cout << endl;
    cout << setw(51) << "Your choice: ";
    cin >> menuAction;
    if (menuAction == 1)
    {

        system("CLS");
        registration();
        system("CLS");
        game();
        game1();
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