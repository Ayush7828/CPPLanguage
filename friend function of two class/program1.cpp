#include <iostream>
using namespace std;
class B;
class A
{
private:
	int x;

public:
	void getdata()
	{
		cout << "Enter a first value:" << endl;
		cin >> x;
	}
	void showdata()
	{
		cout << x << endl;
	}
	friend void sum(A, B);
};
class B
{
private:
	int y;

public:
	void getdata()
	{
		cout << "Enter a second value:" << endl;
		cin >> y;
	}
	void showdata()
	{
		cout << y << endl;
	}
	friend void sum(A, B);
};
void sum(A obj1, B obj2)
{
	int z;
	z = obj1.x + obj2.y;
	cout << "Sum :" << z << endl;
}
int main()
{
	A obj1;
	B obj2;
	obj1.getdata();
	obj1.showdata();
	obj2.getdata();
	obj2.showdata();
	sum(obj1, obj2);
	return 0;
}