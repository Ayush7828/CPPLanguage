// two object use 
#include <iostream>
using namespace std;
class Student
{
private:
	int rno;
	char stduentname[20];
	int marks;

public:
	void getdata()
	{
		cout << "Enter a roll no. ,name and marks:" << endl;
		cin >> rno >> stduentname >> marks;
	}
	void showdata()
	{
		cout << "Roll no.:" << rno << endl;
		cout << "Student name:" << stduentname << endl;
		cout << "Marks:" << marks << endl;
	}
};
int main()
{
	Student s1, s2;
	s1.getdata();
	s1.showdata();

	s2.getdata();
	s2.showdata();

	return 0;
}