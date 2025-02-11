
#include <iostream>
using namespace std;

int main()
{
    string Name;
    int Age;
    string  City;
    string Country ;
    int MonthlySalary;
    char Gender;
    bool Married;

    cout << "Please enter your informations!" << endl << endl;

    cout << "Please enter your name !" << endl;
    cin >> Name;

    cout << "Please enter your age !" << endl;
    cin >> Age;

    cout << "Please enter your city !" << endl;
    cin >> City;

    cout << "Please enter your Country !" << endl;
    cin >> Country;

    cout << "Please enter your MonthlySalary !" << endl;
    cin >> MonthlySalary;

    cout << "Please enter your Gender !" << endl;
    cin >> Gender;

    cout << "Please enter your Married !" << endl;
    cin >> Married;

    cout << "****************************** " << endl;
    cout << "  Name: " << Name << endl;
    cout << "  Age : " << Age << "Years old." << endl;
    cout << "  City : " << City << endl;
    cout << "  Country : " << Country << endl;
    cout << "  Monthly Salary : " << MonthlySalary << "$" << endl;
    cout << "  Yearly Salary : " << MonthlySalary * 12 << "$" << endl;
    cout << "  tGender : " << Gender << endl;
    cout << "  Married : " << Married << endl;
    cout << "******************************\a " << endl;


    return 0;
}