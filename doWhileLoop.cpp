#include <iostream>
using namespace std;
#include <string>

int main()
{
    string password = "secret";
    string guess;

    do
    {
        cout << "Enter password: ";
        // cin >> guess;
        getline(cin, guess);

        if (guess != password)
        {
            cout << "Incorrect Password! Try again." << endl;
        }

    } while (guess != password);

    cout << "Correct Password, Access Granted!" << endl;

    return 0;
}
