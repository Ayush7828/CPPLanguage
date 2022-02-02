#include <iostream>
using namespace std;
int main()
{
	int p, c, h, e, m;
	cout << "Enter a marks of ,physics,chemistry,hindi,english,maths:" << endl;
	cin >> p >> c >> h >> e >> m;

	float result = 0;
	result = (p + c + h + e + m) / 5.0;
	if (result >= 60)
	{

		cout << "A grade";
	}

	else if (result >= 50)
	{

		cout << "B grade";
	}

	else if (result >= 40)
	{

		cout << "c grade";
	}

	else
	{

		cout << "D grade";
	}
}