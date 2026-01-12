#include <iostream>
using namespace std;

struct Rectangle
{
    double length;
    double width;
};

double area(double length, double width)
{
    return length * width;
}

double area (double length)
{
    return length * length; // Area of a square
}

double area (Rectangle rectangle)
{
    return rectangle.length * rectangle.width;
}

int main()
{
    Rectangle rectangle;
    rectangle.length = 10;
    rectangle.width = 10;

    cout << area(rectangle.length, rectangle.width) << endl; // Calls area for rectangle
    cout << area(rectangle.length) << endl; // Calls area for square
    cout << area(rectangle) << endl; // Calls area for Rectangle struct

    return 0;
}