#include <iostream>
using namespace std;

class Lecturer
{
public:
    string name;

    Lecturer(string n) : name{n}, salary{100} {}

    void setSalary(int s)
    { // setter with password check
        string password;
        cout << "Enter password: ";
        getline(cin, password);

        if (password == "admin")
        { // correct password
            salary = s;
            cout << "Salary updated successfully." << endl;
        }
        else
        {
            cout << "Wrong password! Access denied." << endl;
            exit(0); // exit program immediately
        }
    }

    int getSalary()
    {
        return salary;
    }

private:
    int salary;
};

int main()
{
    Lecturer prof1("Nguyen");

    cout << prof1.name << endl;
    cout << prof1.getSalary() << endl;

    prof1.setSalary(200); // only one try

    cout << prof1.getSalary() << endl;

    return 0;
}
