#include <iostream>
using namespace std;
#include <string>

int main()
{

    system("chcp 65001"); // enable UTF-8 mode on Windows terminal

    string password = "secret";
    string guess;

    do
    {
        cout << "Enter password: ";
        cin >> guess;

        if (guess != password)
        {
            cout << "❌ Incorrect Password! Try again." << endl;
        }

    } while (guess != password);

    cout << "✅ Correct Password, Access Granted! 🟢" << endl;

    return 0;
}
