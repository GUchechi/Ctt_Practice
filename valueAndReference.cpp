#include <iostream>
using namespace std;

// Function to swap two integers by value
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Function to swap two integers by reference
void swapByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}



int main() {
    
    int a = 10;
    int b = 20;
    swapByValue(a, b);
    cout << "This is swap by value - "<< "a: " << a << ", b: " << b << endl;

    swapByReference(a, b);
    cout << "This is swap by reference - " << "a: " << a << ", b: " << b << endl;

    return 0;
}