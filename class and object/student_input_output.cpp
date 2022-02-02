#include <iostream>
using namespace std;
class Student
{
private:
	int rollno;
	char studentname[20];
	int marks;

public:
	void getdata()
	{
		cout << "Enter a student roll no. ,name and marks:" << endl;
		cin >> rollno >> studentname >> marks;
	}
	void showdata()
	{
		cout << "Roll no.:" << rollno << endl;
		cout << "Student name :" << studentname << endl;
		cout << "Marks :" << marks;
	}
};
int main()
{
	Student s1;
	s1.getdata();
	s1.showdata();

	return 0;
}