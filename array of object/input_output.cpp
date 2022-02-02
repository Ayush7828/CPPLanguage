// array of object:-
// use to store multiple object
#include <iostream>
using namespace std;
class Employee
{
private:
	int ecode;
	char ename[25];
	int esal;

public:
	void getdata()
	{
		cout << "Enter a employee code, employee name, employee salary:" << endl;
		cin >> ecode >> ename >> esal;
	}
	void showdata()
	{
		cout << "Employee code:" << ecode << endl;
		cout << "Employee name :" << ename << endl;
		cout << "Employee salary:" << esal << endl;
	}
};
int main()
{
	Employee obj1[5];
	for (int i = 0; i < 5; i++)
	{
		
		obj1[i].getdata();
	}
	for (int i = 0; i < 5; i++)
	{
		
		obj1[i].showdata();
	}

	return 0;
}