#include <iostream>
using namespace std;
class A
{

private:
	int a, b, sum;

public:
	void getdata()
	{
		cout << "Enter a value of A and B:" << endl;
		cin >> a >> b;
	}
	void showdata()
	{
		sum = a + b;
		cout << "Sum :" << sum << endl;
	}
};
int main()
{
	A obj1;

	obj1.getdata();
	obj1.showdata();

	return 0;
}