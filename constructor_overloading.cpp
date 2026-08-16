#include <iostream>
#include <string>
using namespace std;
class Student
{
private:
    string name;
    int age;
public:
    // Default constructor
    Student()
    {
        name = "Unknown";
        age = 0;
    }
    // Constructor with one parameter
    Student(string studentName)
    {
        name = studentName;
        age = 0;
    }
    // Constructor with two parameters
    Student(string studentName, int studentAge)
    {
        name = studentName;
        age = studentAge;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
int main()
{
    cout << "===== CONSTRUCTOR OVERLOADING =====" << endl;
    cout << "\nStudent 1 - Default Constructor" << endl;
    Student student1;
    student1.display();
    cout << "\nStudent 2 - One Parameter" << endl;
    Student student2("Anugrah");
    student2.display();
    cout << "\nStudent 3 - Two Parameters" << endl;
    Student student3("Anugrah", 19);
    student3.display();
    return 0;
}
