#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main() {
    srand(time(0));
    int numberToGuess = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    cout<< " *** Welcome  ***  Welcome***  *** Welcome ***" <<endl;
    cout<< " {   Welcome to the Number Guessing Game!   }" <<endl;
    cout<< " I have selected a number between 1 and 100." <<endl;
    cout<< " Can you guess what it is?" <<endl;

    do 
    {
        cout<< "Enter your guess: ";
        cin>> guess;
        attempts++;

        if(guess < numberToGuess){
            cout<< "Too low! Try again." <<endl;
        } 
        else if(guess > numberToGuess)
        {
            cout<< "Too high! Try again." <<endl;
        } 
        else 
        {
            cout<< "Congratulations! You've guessed the number " << numberToGuess << " in " << attempts << " attempts." <<endl;
        }

    } 

    while(guess != numberToGuess);
    return 0;
    
}