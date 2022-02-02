#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	int p, r, t;
	cout << "Enter a principle ,rate and time" << endl;
	cin >> p >> r >> t;
	float ci = p * (pow((1 + r / 100), t));
	cout << "Compound interest is :" << ci << endl;
	return 0;
}