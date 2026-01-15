#include <iostream>
using namespace std;
#include <vector>

class User
{

    string status;

public:
    string first_name;
    string last_name;
    string get_status()
    {
        return status;
    }

    User()
    {
        cout << "Default constructor called." << endl;
    };

    User(string first_name, string last_name, string status)
    {
        this->first_name = first_name;
        this->last_name = last_name;
        this->status = status;
        cout << "Parameterized constructor called for " << first_name << " " << last_name << "." << endl;
    };
    ~User()
    {
        cout << "Destructor called for " << first_name << " " << last_name << "." << endl;
    };
};

int main()
{
    User user("Godswill", "Uchechi", "Active");
    cout << user.first_name << " " << user.last_name << " is " << user.get_status() << endl;
    return 0;
}