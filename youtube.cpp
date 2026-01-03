#include <iostream>
using namespace std;

int multiply(int a, int b)
{
    return a * b;
}

void print_multiply(int a, int b)
{
    cout << a << " multiplied by " << b << " is " << multiply(a, b) << ".\n";
}

int main()
{

    int a, b;
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    print_multiply(a, b);

    return 0;
}