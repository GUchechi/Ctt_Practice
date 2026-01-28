#include <iostream>
using namespace std;
#include <string>

int main()
{

    string name_answer = "Caleb";
    int age_answer = 63;

    string name_guess;
    cout << "Who is the best programmer?" << endl;
    getline(cin, name_guess);

    int age_guess;
    cout << "Guess my age:" << endl;
    cin >> age_guess;

    if (name_guess == name_answer)
    {
        if (age_guess == age_answer)
        {
            cout << "Yes, you're Correct!" << endl;
        }
        else
        {
            cout << "No, you're Incorrect!" << endl;
        }
    }
    else
    {
        cout << "No, you're Incorrect!" << endl;
    }

   

    return 0;
}