#include <iostream>
using namespace std;

class Month
{
public:
    int monthNumber;
    string monthName;

    // Default constructor
    Month()
    {
        monthNumber = 0;
        monthName = "Unknown";
    }

    // Constructor with month number
    Month(int m)
    {
        if (m == 1)
        {
            monthNumber = 1;
            monthName = "January";
        }
        else if (m == 2)
        {
            monthNumber = 2;
            monthName = "February";
        }
        else if (m == 3)
        {
            monthNumber = 3;
            monthName = "March";
        }
        else if (m == 11)
        {
            monthNumber = 11;
            monthName = "November";
        }
        else
        {
            monthNumber = 0;
            monthName = "Unknown";
        }
    }

    // Constructor with month name
    Month(string name)
    {
        if (name == "January")
        {
            monthNumber = 1;
            monthName = "January";
        }
        else if (name == "February")
        {
            monthNumber = 2;
            monthName = "February";
        }
        else if (name == "March")
        {
            monthNumber = 3;
            monthName = "March";
        }
        else if (name == "November")
        {
            monthNumber = 11;
            monthName = "November";
        }
        else
        {
            monthNumber = 0;
            monthName = "Unknown";
        }
    }

    void print_data()
    {
        cout << monthNumber << ": " << monthName << endl;
    }
};

int main()
{
    Month m0;
    Month m1(2);
    Month m2("November");

    m0.print_data();
    m1.print_data();
    m2.print_data();

    return 0;
}
