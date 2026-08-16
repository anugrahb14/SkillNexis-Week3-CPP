#include <iostream>
using namespace std;
class Shape
{
public:
    virtual void displayArea() = 0;
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
    void displayArea()
    {
        cout << "Rectangle Area: " << length * width << endl;
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
    void displayArea()
    {
        cout << "Circle Area: " << 3.14159 * radius * radius << endl;
    }
};
int main()
{
    double length, width, radius;
    cout << "===== ABSTRACT CLASS WITH VIRTUAL FUNCTION =====" << endl;
    cout << "Enter rectangle length: ";
    cin >> length;
    cout << "Enter rectangle width: ";
    cin >> width;
    cout << "Enter circle radius: ";
    cin >> radius;
    Rectangle rectangle(length, width);
    Circle circle(radius);
    cout << endl;
    Shape* shape1 = &rectangle;
    Shape* shape2 = &circle;
    shape1->displayArea();
    shape2->displayArea();
    return 0;
}
