#include <iostream>
#include <string>
using namespace std;
class Employee
{
private:
    string name;
    double basicSalary;
    double allowance;
public:
    Employee(string empName, double salary, double empAllowance)
    {
        name = empName;
        basicSalary = salary;
        allowance = empAllowance;
    }
    double calculateSalary()
    {
        return basicSalary + allowance;
    }
    void display()
    {
        cout << "===== EMPLOYEE DETAILS =====" << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Allowance: " << allowance << endl;
        cout << "Total Salary: " << calculateSalary() << endl;
    }
};
int main()
{
    string name;
    double basicSalary, allowance;
    cout << "Enter employee name: ";
    getline(cin, name);
    cout << "Enter basic salary: ";
    cin >> basicSalary;
    cout << "Enter allowance: ";
    cin >> allowance;
    Employee employee(name, basicSalary, allowance);
    cout << endl;
    employee.display();
    return 0;
}
