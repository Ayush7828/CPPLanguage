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
	A(T1 x, T1 y)
	{
		a = x;
		b = y;
	}
	void sum()
	{
		c = a + b;
		cout << "Sum :" << c << endl;
	}
};

int main()
{
	A<int, int, int> obj1(5, 8);
	obj1.sum();
	A<int, float, int> obj2(2, 56.7);
	obj2.sum();
	A<int, float, float> obj3(25.4, 7);
	obj3.sum();
	A<int, char, char> obj4(4, 'A');
	obj4.sum();
}
