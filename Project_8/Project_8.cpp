#include <iostream>
using namespace std;


int A;
int B;

int main()
{
    cout << "Please enter a number A!" << endl;
    cin >> A;
    cout << "Please enter a number B!" << endl;
    cin >> B;

    cout << "50 = 50 is " << (A == B) << endl;
    cout << "50 != 50 is " << (A != B) << endl;
    cout << "50 > 50 is " << (A > B) << endl;
    cout << "50 < 50 is " << (A < B) << endl;
    cout << "50 >= 50 is " << (A >= B) << endl;
    cout << "50 <= 50 is " << (A <= B) << endl;

    return 0;
}