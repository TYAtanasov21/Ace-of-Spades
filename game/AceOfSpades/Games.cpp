#include <iostream>
#include <string>
#include <windows.h>
#include <sys/types.h>
#include <iomanip>

#include "Games.h"
using namespace std;


void game()
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