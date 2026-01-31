#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound()
    {
        cout << "The animal makes a sound\n";
    }
};

class Dog : public Animal
{
public:
    void sound() override
    {
        cout << "Wow wow\n";
    }
};

int main()
{
    Animal *a; // parent class pointer
    Dog myDog;

    a = &myDog; // pointer points to Dog object
    a->sound(); // calls Dog::sound (POLYMORPHISM)

    return 0;
}
