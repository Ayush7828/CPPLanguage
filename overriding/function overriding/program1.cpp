#include<iostream>
using namespace std;
class School{
  private:
  int scode;
  char sname[20];
  public:
  void getdata(){
	  cout<<"enter a school code and school name "<<endl;
	  cin>>scode>>sname;

  }
  void showdata(){
	  cout<<"School code "<<scode<<endl;
	  cout<<"School name "<<sname<<endl;
  }

};
class Student :public School{
   private:
   int rno,marks;
   char sname[10];
   public:
   void getdata(){
	   //SYNTAX 
	   // base class ::function name
	   School:: getdata();
	   cout<<"Enter a roll no, marks and name "<<endl;
	   cin>>rno>>marks>>sname;


   }
   void showdata(){
	   School::showdata();
	   cout<<"Roll no. "<<rno<<endl;
	   cout<<"Marks "<<marks<<endl;
	   cout<<"Student NAME "<<sname<<endl;
   }
};
int main(){
Student s1;
s1.getdata();
s1.showdata();
}