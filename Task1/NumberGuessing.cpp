#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    int randomNumber, guess;

    srand(time(0));

    randomNumber = rand() % 100 + 1;

    cout << "Guess the number between 1 and 100\n";

    do {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > randomNumber) {
            cout << "Too high! Try again.\n";
        } else if (guess < randomNumber) {
            cout << "Too low! Try again.\n";
        } else {
            cout << "Congratulations! You guessed the correct number.\n";
        }

    } while (guess != randomNumber);

    return 0;
}
