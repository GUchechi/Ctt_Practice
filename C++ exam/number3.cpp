#include <iostream>
#include <string>
using namespace std;

int main()
{
    string correctPassword = "aBc";
    string guess;

    cout << "Enter password: ";

    while (true)
    {
        getline(cin, guess);
        if (guess == correctPassword)
        {
            cout << "Correct password. Access granted." << endl;
            break;
        }
        else
        {
            cout << "Wrong password! Please try again: ";
        }
    }

    return 0;
}
