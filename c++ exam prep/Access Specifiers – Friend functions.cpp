#include <iostream>
using namespace std;

class Student
{
public:
    // Public data members
    string name;
    int birthYear;
    string studyProgram;

    // Default constructor (empty values)
    Student()
    {
        name = "";
        birthYear = 0;
        studyProgram = "";
        phoneNumber = "";
        address = "";
    }

    // Constructor with public data
    Student(string n, int y, string p)
    {
        name = n;
        birthYear = y;
        studyProgram = p;
        phoneNumber = "";
        address = "";
    }

    // Setters
    void setPhoneNumber(string phone)
    {
        phoneNumber = phone;
    }

    void setAddress(string addr)
    {
        address = addr;
    }

    // Getter
    string getPhoneNumber()
    {
        return phoneNumber;
    }

    // Print public data
    void printPublicData()
    {
        cout << name << ", " << birthYear << ", " << studyProgram << endl;
    }

    // Friend function declaration
    friend void displayAddress(const Student &s);

private:
    // Private data members
    string phoneNumber;
    string address;
};

// Friend function definition
void displayAddress(const Student &s)
{
    cout << "Address: " << s.address << endl;
}

int main()
{
    Student s1;
    Student s2("Emma", 1998, "DRO");

    s2.setPhoneNumber("123456789");
    s2.setAddress("Kufstein");

    s1.printPublicData();
    s2.printPublicData();

    cout << "Phone number: " << s2.getPhoneNumber() << endl;
    displayAddress(s2);

    return 0;
}
