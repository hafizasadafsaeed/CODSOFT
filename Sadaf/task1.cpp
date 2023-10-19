#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generate a random number between 1 and 100 (you can adjust the range as needed)
    int secretNumber = std::rand() % 100 + 1;
    int attempts = 0;
    int userGuess;

    while (true) {
        std::cout << "Guess the number (between 1 and 100): ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess < secretNumber) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > secretNumber) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You've guessed the number " << secretNumber << " in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}
