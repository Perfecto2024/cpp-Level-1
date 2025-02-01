
#include <iostream>
using namespace std;

int main()
{
    string Name = " Alsaeed Abubaker. ";
    int Age = 30;
    string  City = " Khartom ";
    string Country = " Sudan ";
    int MonthlySalary = 5000;
    char Gender = 'M';
    bool Married = false;

    cout << "****************************** " << endl;
    cout << "Name: " << Name << endl;
    cout << "Age : " << Age << "Years old." << endl;
    cout << "City : " << City << endl;
    cout << "Country : " << Country << endl;
    cout << "Monthly Salary : " << MonthlySalary << "$" << endl;
    cout << "Yearly Salary : " << MonthlySalary * 12 << "$" << endl;
    cout << "Gender : " << Gender << endl;
    cout << "Married : " << Married << endl;
    cout << "****************************** " << endl;



    return 0;
}