#include <iostream>
using namespace std;

/* ===== Base Class ===== */
class Student
{
public:
    string name;
    int birthYear;
    string studyProgram;

    // Default constructor
    Student()
    {
        name = "";
        birthYear = 0;
        studyProgram = "";
    }

    // Constructor with public data
    Student(string n, int y, string p)
    {
        name = n;
        birthYear = y;
        studyProgram = p;
    }
};

/* ===== Derived Class ===== */
class Graduate : public Student
{
public:
    // Public data members
    int gradYear;
    bool status; // 0 = unemployed, 1 = employed

protected:
    // Protected data member
    string profession;

private:
    // Private data member
    string employer;

public:
    // 1️⃣ Default constructor
    Graduate() : Student()
    {
        gradYear = 0;
        status = 0;
        profession = "";
        employer = "";
    }

    // 2️⃣ Inherited constructor (name, birthYear, studyProgram)
    Graduate(string n, int y, string p) : Student(n, y, p)
    {
        gradYear = 0;
        status = 0;
        profession = "";
        employer = "";
    }

    // 3️⃣ Constructor with gradYear
    Graduate(string n, int y, string p, int g) : Student(n, y, p)
    {
        gradYear = g;
        status = 0;
        profession = "";
        employer = "";
    }

    // 4️⃣ Full constructor
    Graduate(string n, int y, string p, int g,
             bool s, string prof, string emp) : Student(n, y, p)
    {
        gradYear = g;
        status = s;
        profession = prof;
        employer = emp;
    }

    // Setter & getter for profession
    void setProfession(string p)
    {
        profession = p;
    }

    string getProfession()
    {
        return profession;
    }

    // Setter & getter for employer
    void setEmployer(string e)
    {
        employer = e;
    }

    string getEmployer()
    {
        return employer;
    }

    // Print complete dataset
    void printGraduateData()
    {
        cout << name << ", "
             << birthYear << ", "
             << studyProgram << ", "
             << gradYear << ", "
             << (status ? "Employed" : "Unemployed") << ", "
             << profession << ", "
             << employer << endl;
    }
};

/* ===== Test Program ===== */
int main()
{
    Graduate g1;
    Graduate g2("Anna", 1998, "DRO");
    Graduate g3("Mark", 1997, "SWING", 2022);
    Graduate g4("Lisa", 1996, "CS", 2021, 1, "Engineer", "Google");

    g1.printGraduateData();
    g2.printGraduateData();
    g3.printGraduateData();
    g4.printGraduateData();

    return 0;
}
