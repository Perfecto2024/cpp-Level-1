
#include <iostream>
using namespace std;
int main()
{
    unsigned int x ;
    signed  y ;
    short z ;

    cout << "please enter a number!" << endl;

    cin >> x; 
    cin >> y;
    cin >> z;

    cout << "Your Number is!" << endl;
    cout <<"Num1\t" << x << " + " << endl;
    cout <<"Num2\t" << y << " + " << endl;
    cout <<"Num3\t" << z << endl;
    cout << "------------------------" << endl;
    cout << "Total = " << x + y + z << endl;

    return 0;
}   
