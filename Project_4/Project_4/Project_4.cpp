#include <iostream>
using namespace std;

int main()
{
    string Name;
    short Age;
    string  City;
    string Country;
    short MonthlySalary;
    char Gender;
    bool ISMarried;

    cout << "Please enter your informations!" << endl << endl;

    cout << "Enter your name !" << endl;
    cin >> Name;

    cout << "Enter your age !" << endl;
    cin >> Age;

    cout << "Enter your city !" << endl;
    cin >> City;

    cout << "Enter your Country !" << endl;
    cin >> Country;

    cout << "Enter your MonthlySalary !" << endl;
    cin >> MonthlySalary;

    cout << "Enter your Gender !" << endl;
    cin >> Gender;

    cout << "Enter your Married !" << endl;
    cin >> ISMarried;

    cout << "****************************** " << endl;
    cout << "  Name: " << Name << endl;
    cout << "  Age : " << Age << "Years old." << endl;
    cout << "  City : " << City << endl;
    cout << "  Country : " << Country << endl;
    cout << "  Monthly Salary : " << MonthlySalary << "$" << endl;
    cout << "  Yearly Salary : " << MonthlySalary * 12 << "$" << endl;
    cout << "  Gender : " << Gender << endl;
    cout << "  Married : " << ISMarried << endl;
    cout << "******************************\a " << endl;


    return 0;
}