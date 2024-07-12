#include <iostream>
#include <cstdlib>   
#include <ctime>     

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int secretNumber = rand() % 100 + 1;       
    int guess;
    int attempts = 0;
    
    cout << "Welcome to the Number Guessing Game!\n";
    cout << "Guess a number between 1 and 100:\n";
    
    do {
        cin >> guess;
        attempts++;
        
        if (guess < secretNumber) {
            cout << "Too low! Try guessing higher.\n";
        } else if (guess > secretNumber) {
            cout << "Too high! Try guessing lower.\n";
        } else {
            cout << "Congratulations! You guessed the number " << secretNumber << " in " << attempts << " attempts!\n";
        }
        
    } while (guess != secretNumber);
    
    return 0;
}
