#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int num, guesses, chance = 0;
    bool guess = 0;

    srand (time(NULL));
    num = rand() % 99 + 0;

    do
    {
        chance++;
        cout << "Please guess a number(0-99): ";
        cin >> guesses;
    if(guesses < num)
    {
        cout << "Too Low. Try again" << endl;
    }
    else if (guesses > num)
    {
        cout << "Too High. Try again" << endl;
    }
    else
    {
        cout << "Congratulations You guessed it right after " << chance << " attempts." << endl;
        guess = true;
    }

    }
    while(guess == false);

    return 0;
}