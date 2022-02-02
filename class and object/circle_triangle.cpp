#include <iostream>
using namespace std;
class Area
{
private:
	int base, height, radius, area;

public:
	void getdata()
	{
		cout << "Enter a base and heigth:" << endl;
		cin >> base >> height;
	}
	void triangle()
	{
		area = base * height;
		cout << "Area of traingle is :" << area << endl;
	}
	void get()
	{
		cout << "Enter a radius:" << endl;
		cin >> radius;
	}
	void circle()
	{
		area = radius * radius;
		cout << "Area of circle is :" << area << endl;
	}
};
int main()
{
	Area obj1;
	obj1.getdata();
	obj1.triangle();
	obj1.get();
	obj1.circle();
	return 0;
}