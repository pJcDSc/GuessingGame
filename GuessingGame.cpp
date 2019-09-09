#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
  srand(time(NULL));
  bool playing = true;
  while(playing){
    int randNum = rand() % 100 + 1;
    int guess = 0;
    do {
      cout << "Guess a number between 1 and 100" << endl;
      cin >> guess;
      if (guess < randNum) cout << "Too low!" << endl;
      else if (guess > randNum) cout << "Too high!" << endl;
    } while(guess != randNum);

    cout << "You guessed the number! Play again? (y/n)" << endl;
    char again = 'n';
    cin >> again;
    if (again == 'n') {
      cout << "Thank you for playing! Goodbye!" << endl;
      playing = false;
    }
  }
}