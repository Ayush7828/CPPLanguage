#include <iostream>
using namespace std;
class College
{
private:
	int cid;
	char cname[20];

public:
	void getcolg()
	{
		cout << "Enter a college id and collge name " << endl;
		cin >> cid >> cname;
	}
	void showcolg()
	{
		cout << "College id " << cid << endl;
		cout << "College name " << cname << endl;
	}
};
class Student : public College
{
private:
	int rno;
	char sname[20];
	int fees;

public:
	void getdata()
	{
		cout << "Enter a roll no,namm and fees :" << endl;
		cin >> rno >> sname >> fees;
	}
	void showdata()
	{
		cout << "Roll no " << rno << endl;
		cout << "Student name " << sname << endl;
		cout << "Fees " << fees << endl;
	}
};
int main()
{

	Student s1;
	s1.getcolg();
	s1.getdata();
	s1.showcolg();
	s1.showdata();
}