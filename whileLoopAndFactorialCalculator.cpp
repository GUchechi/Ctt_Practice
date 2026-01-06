#include <iostream>
using namespace std;

int main() {

    int fact;
    cout << "Enter a number to find its factorial: ";
    cin >> fact;

    int factorial = fact;
    int i = factorial - 1;
    while (i >= 1) {
        factorial *= i;
        --i;
    }
    cout << "Factorial of " << fact << " is: " << factorial;

    return 0;
}