#include <iostream>
using namespace std;
class Simpleinterest
{
private:
	int p, r, t, si;

public:
	void getdata()
	{
		cout << "Enter a priciple ,rate and time" << endl;
		cin >> p >> r >> t;
	}
	void si1()
	{
		si = (p * r * t) / 100;
		cout << "Simple interest :" << si << endl;
	}
};
int main()
{
	Simpleinterest obj1[5];
	for (int i = 0; i < 5; i++)
	{
		/* code */
		obj1[i].getdata();
	}
	for (int i = 0; i < 5; i++)
	{
		/* code */
		obj1[i].si1();
	}

	return 0;
}