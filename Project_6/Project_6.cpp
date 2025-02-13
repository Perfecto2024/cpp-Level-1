#include <iostream>
using namespace std;

int main()
{
	short int MyAge = 30;
	short int YourAge = 35;

	cout << "I am:" << MyAge << "years old" << endl;
	cout << "You are:" << YourAge << "years old" << endl;

	MyAge++; ++YourAge;
	cout << "One years passes ..." << endl;
	cout << "I am:" << MyAge << "years old" << endl;
	cout << "You are:" << YourAge << "years old" << endl;
	cout << "Another year passes..." << endl;
	cout << "I am:" << ++MyAge << "years old" << endl;
	cout << "You are:" << ++YourAge << "years old" << endl;
	cout << "lets print it agin" << endl;
	cout << "I am:" << MyAge++ << "years old" << endl;
	cout << "You are:" << YourAge++ << "years old" << endl;
	return 0;
}