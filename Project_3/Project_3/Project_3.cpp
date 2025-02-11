#include <iostream>
using namespace std;

int main()
{
    int x = 20;
    int y;
    int z;


    cout << "After 5 years you will be " << x + 10 << "years." << endl;
    cout << "Enter a Number?" << endl;
    cin >> y;
    cout << "Num2\t" << y << " + " << endl;
    cin >> z;
    cout << "Num3\t" << z << endl;
    cout << "------------------------" << endl;
    cout << "Total = " << x + y + z << endl;

    return 0;
}