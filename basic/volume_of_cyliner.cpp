#include <iostream>

using namespace std;

int main()
{
	int r, h;
	cout << "Enter a radius and height:" << endl;
	cin >> r >> h;
	int vol = 3.14 * r * r * h;
	cout << "Volume of cylinder is " << vol << endl;
	return 0;
}