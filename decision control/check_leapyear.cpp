#include <iostream>
using namespace std;
int main()
{
	int year;
	cout << "Enter a year ";
	cin >> year;
	if (year % 400 == 0 && year % 100 == 0 || year % 4 == 0)
	{
		cout << "Yes it is a leap year " << endl;
	}
	else
	{
		cout << "NO it is a not a leap year" << endl;
	}
	return 0;
}
