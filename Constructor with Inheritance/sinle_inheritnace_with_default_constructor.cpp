#include <iostream>
#include <string.h>

using namespace std;
class School
{
	int scode;
	char sname[20];

public:
	// default constructor
	School()
	{
		scode = 120;
		strcpy(sname, "ABC");
		cout << "Default Constructor at base class " << endl;
	}
	void showdata(){
		cout<<"SCHOOL code "<<scode<<endl;
		cout<<"School Name "<<sname<<endl;
	}
};
class Faculty:public School{
  private:
  int fid;
  char fname[20];
  public:
  Faculty(){
	  fid=45;
	  strcpy(fname,"XYZ");
	  cout<<"Default constructor at derived class"<<endl;

  }
  void showdetails(){
		cout<<"faculty  code "<<fid<<endl;
		cout<<"faculty name  "<<fname<<endl;
	}
};
int main()
{  
	Faculty f1;
	f1.showdata();
	f1.showdetails();
}