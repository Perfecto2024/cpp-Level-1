#include <iostream>
using namespace std;


int main()
{
	bool Result1;
	bool Result2;
	bool Result3;
	bool Result4;

	Result1 = (12 >= 12)
		<< (12 > 7)
		<< (8 < 6)
		<< (8 == 8)
		<< (12 <= 12)
		<< (7 == 5);
		
	Result2 = !(12 >= 12)
		<< !(12 > 7)
		<< !(8 < 6)
		<< !(8 == 8)
		<< !(12 <= 12)
		<< !(7 == 5);

	Result3 = (1 && 1)
		<< (true && 0)
		<< (1 || 0)
		<< (0 || 0)
		<< !(0)
		<< !(1 || 0);

	Result4 = (7 == 7) && (7 > 5)
		<< (7 == 7) && (7 < 5)
		<< (7 == 7) || (7 < 5)
		<< (7 == 7) || (7 > 5)
		<< !(7 == 7) && (7 > 5)
		<< !(7 == 7) && (7 < 5);

	cout << Result1 << endl;
	cout << Result2 << endl;
	cout << Result3 << endl;
	cout << Result4 << endl;

	return 0;
}