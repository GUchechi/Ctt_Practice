#include <iostream>
using namespace std;

int main()
{

    // int a = 10;
    // int b = 20;
    // int max = (a > b) ? a : b;
    // cout << "Maximum of " << a << " and " << b << " is: " << max << endl;

    int answer = 11;
    cout << "Guess the number (between 1 and 20): ";
    int guess;
    cin >> guess;

    string result = (guess == answer)  ? "Correct! You guessed the number."
                    : (guess < answer) ? "Too low! Try again."
                                       : "Too high! Try again.";

    cout << result << endl;

    return 0;
}