#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
#include <ctime>
#include <vector>

void print_vector(vector<int> vector)
{
    for (int value : vector)
    {
        cout << value << "\t";
    }
    cout << endl;
}

void playGame()
{
    cout << "Welcome to the Number Guessing Game!\n";

    // Generate a random number between 0 and 250
    vector<int> guesses;

    int random = rand() % 251; // Random number between 0 and 250
    cout << "Random number generated: " << random << endl;

    while (true)
    {
        int guess;
        cout << "Enter your guess (0-250): ";
        cin >> guess;

        guesses.push_back(guess);

        if (guess < 0 || guess > 250)
        {
            cout << "Please enter a valid number between 0 and 250.\n";
            continue;
        }

        if (guess < random)
        {
            cout << "Too low! Try again.\n";
        }
        else if (guess > random)
        {
            cout << "Too high! Try again.\n";
        }
        else
        {
            cout << "Congratulations! You've guessed the correct number: " << random << "\n";
            break;
        }
    }

    print_vector(guesses);
}

int main()
{

    srand(time(nullptr)); // Seed the random number generator

    int choice;

    do
    {
        cout << "0. Quit\n1. Play Game\n";
        cin >> choice;

        switch (choice)
        {
        case 0:
            cout << "Quitting the game. Goodbye!\n";
            return 0;
        case 1:
            playGame();
            break;
        }
    } while (choice != 0);

    return 0;
}