#include <iostream>
using namespace std;
template <class T1, class T2, class T3>
class A
{
private:
	T1 a;
	T2 b;
	T3 c;

public:
	A(T1 x, T2 y)
	{
		a = x;
		b = y;
	}
	void mul()
	{
		c = a * b;
		cout << "Multiply :" << c << endl;
	}
	void sum()
	{
		c = a + b;
		cout << "Sum :" << c << endl;
	}
	void divide()
	{
		c = a / b;
		cout << "divide :" << c << endl;
	}
};
int main()
{
	A<int, int, int> obj1(45, 8);
	obj1.mul();
	obj1.sum();
	obj1.divide();

	A<int, float, float> obj2(4.5, 8.9);
	obj2.mul();
	obj2.sum();
	obj2.divide();

	return 0;
}