#include <iostream>
using namespace std;

struct User
{
    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }

private:
    string status = "Active";
};

int main()
{

    User user;
    user.first_name = "Godswill";
    user.last_name = "Uchechi";

    cout << "First Name: " << user.first_name << endl;
    cout << "Last Name: " << user.last_name << endl;
    cout << "Status: " << user.get_status() << endl;

    return 0;
}