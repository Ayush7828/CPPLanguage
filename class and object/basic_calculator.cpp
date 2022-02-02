#include <iostream>
using namespace std;
class Calculator
{

private:
	int a, b, sum = 0, mul = 1, div, mod;

public:
	void getdata()
	{
		cout << "Enter a Value of A and B:" << endl;
		cin >> a >> b;
	}
	void sum1()
	{
		sum = a + b;
		cout << "Sum:" << sum << endl;
	}
	void multiply()
	{
		mul = a * b;
		cout << "Multiply:" << mul << endl;
	}
	void divide()
	{
		div = a / b;
		cout << "Divide:" << div << endl;
	}
	void modu()
	{
		mod = a % b;
		cout << "Modules:" << mod << endl;
	}
};
int main()
{
	Calculator obj1;
	obj1.getdata();

	obj1.sum1();
	obj1.multiply();
	obj1.divide();
	obj1.modu();
}