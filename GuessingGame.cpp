/*
 * Author: Peter Jin
 * Date: 9/9/2019
 * Guessing Game: Game where you guess a number
 */
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  //Initialize random seed
  srand(time(NULL));

  //Loop while user wants to keep playing
  bool playing = true;
  while(playing){

    //Generate the random (secret) number
    int randNum = rand() % 100 + 1;
    int guess = 0;
    int numGuess = 0;
    do {

      //Prompt user for guess
      cout << "Guess a number between 1 and 100!" << endl;
      cin >> guess;

      //Increment guess count
      numGuess ++;
      
      //Tell user they suck at guessing if they are wrong
      if (guess < randNum) cout << "Too low!" << endl;
      else if (guess > randNum) cout << "Too high!" << endl;

      //Stop looping once they have guessed it
    } while(guess != randNum);

    //Ask if they want to play again
    cout << "You guessed the number in " << numGuess << " tries! Play again? (y/n)" << endl;
    char again = 'n';
    cin >> again;

    //If they do not want to play again set looping variable to false
    if (again == 'n') {
      cout << "Thank you for playing! Goodbye!" << endl;
      playing = false;
    }
  }
}
