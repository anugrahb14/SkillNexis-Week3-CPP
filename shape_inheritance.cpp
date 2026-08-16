#include <iostream>
using namespace std;
class Shape
{
public:
    virtual double area()
    {
        return 0;
    }
};
class Rectangle : public Shape
{
private:
    double length;
    double width;
public:
    Rectangle(double l, double w)
    {
        length = l;
        width = w;
    }
    double area()
    {
        return length * width;
    }
};
class Circle : public Shape
{
private:
    double radius;
public:
    Circle(double r)
    {
        radius = r;
    }
    double area()
    {
        return 3.14159 * radius * radius;
    }
};
int main()
{
    double length, width, radius;
    cout << "===== SHAPE INHERITANCE =====" << endl;
    cout << "Enter rectangle length: ";
    cin >> length;
    cout << "Enter rectangle width: ";
    cin >> width;
    cout << "Enter circle radius: ";
    cin >> radius;
    Rectangle rectangle(length, width);
    Circle circle(radius);
    cout << "\nRectangle Area: " << rectangle.area() << endl;
    cout << "Circle Area: " << circle.area() << endl;
    return 0;
}
