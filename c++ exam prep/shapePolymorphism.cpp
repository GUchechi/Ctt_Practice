#include <iostream>
#include <cmath>
using namespace std;
#include <vector>

/* ===== Base Class (DO NOT MODIFY) ===== */
class Shape
{
public:
    virtual ~Shape() {}             // virtual destructor
    virtual double area() = 0;      // pure virtual
    virtual double perimeter() = 0; // pure virtual

    void printInfo()
    {
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

/* ===== Rectangle ===== */
class Rectangle : public Shape
{
public:
    double width;
    double height;

    Rectangle(double w, double h) : width(w), height(h) {}

    double area() override
    {
        return width * height;
    }

    double perimeter() override
    {
        return 2 * (width + height);
    }
};

/* ===== Square ===== */
class Square : public Shape
{
public:
    double side;

    Square(double s) : side(s) {}

    double area() override
    {
        return side * side;
    }

    double perimeter() override
    {
        return 4 * side;
    }
};

/* ===== Circle ===== */
class Circle : public Shape
{
public:
    double radius;

    Circle(double r) : radius(r) {}

    double area() override
    {
        return M_PI * radius * radius;
    }

    double perimeter() override
    {
        return 2 * M_PI * radius;
    }
};

/* ===== Test Program ===== */
int main()
{
    Rectangle rec(10, 20);
    rec.printInfo();

    Square sqr(15);
    sqr.printInfo();

    Circle circ(10);
    circ.printInfo();

    return 0;
}

// int main()
// {
//     Rectangle rec(10, 20);
//     Square sqr(15);
//     Circle circ(10);
//     vector<Shape *> shapes = {&rec, &sqr, &circ};
//     double total_area = 0, total_perimeter = 0;
//     for (Shape *s : shapes)
//     {
//         total_area += s->area();
//         total_perimeter += s->perimeter();
//     }
//     cout << "Total area: " << total_area << endl;
//     cout << "Total perimeter: " << total_perimeter << endl;
//     return 0;
// }
