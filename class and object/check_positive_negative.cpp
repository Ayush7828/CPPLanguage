#include <iostream>
using namespace std;
class Check
{
private:
	int num;

public:
	void getdata()
	{
		cout << "Enter a number :" << endl;
		cin >> num;
	}
	void check1()
	{
		if (num < 0)
		{
			cout << "Number is negative " << endl;
		}
		else if (num > 0)
		{
			cout << "NUmber is positive:" << endl;
		}
		else
		{
			cout << "Zero" << endl;
		}
	}
};

int main()
{
	Check obj1;
	obj1.getdata();
	obj1.check1();

	return 0;
}