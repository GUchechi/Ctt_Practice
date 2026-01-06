#include <iostream>
using namespace std;

int main() {
    int age;
    cout << "Enter your age: ";
    cin >> age;

    switch (age) {
        case 0 ... 12:
            cout << "You are a child." << endl;
            break;
        case 13 ... 17:
            cout << "You are a teenager." << endl;
            break;
        case 18 ... 64:
            cout << "You are an adult." << endl;
            break;
        case 65 ... 120:
            cout << "You are a senior citizen." << endl;
            break;
        default:
            cout << "Invalid age entered." << endl;
            break;
    }

    enum seasons { SPRING, SUMMER, FALL, WINTER };
    seasons currentSeason = WINTER;

    switch (currentSeason) {
        case SPRING:
            cout << "It's spring." << endl;
            break;
        case SUMMER:
            cout << "It's summer, stay cool." << endl;
            break;
        case FALL:
            cout << "It's fall, stay warm." << endl;
            break;
        case WINTER:
            cout << "It's winter, stay warm." << endl;
            break;
    }

    return 0;
}