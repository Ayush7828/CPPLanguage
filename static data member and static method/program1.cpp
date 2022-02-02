#include<iostream>
using namespace std;
class Emp{
  private:
  int eno;
  char ename[10];
  int esal;
  static int total;
  public:
  void getdata(){
	  cout<<"Enter a employee no.,name and salary:"<<endl;
	  cin>>eno>>ename>>esal;
	  total+=esal;

	  
  }
  void showdata(){
	  cout<<"Employee no."<<eno<<endl;
	  cout<<"Employee name"<<ename<<endl;
	  cout<<"Employee salaray"<<esal<<endl;
  }
  static void showdata1(){
	  cout<<"Total salary"<<total;
  }
};
 int Emp::total;
int main(){
   Emp e1 ,e2;
   e1.getdata();
   e2.getdata();
   e1.showdata();
   e2.showdata();
   Emp::showdata();
   return 0;
}