#include<iostream>
using namespace std;
class College{
   private:
   int ccode;
   char cname[20];

   protected:
   int fees;
   public:
   void getdata(){
	   cout<<"Enter a college code and name "<<endl;
	   cin>>ccode>>cname;
   }

   void showdata(){
	   cout<<"college code "<<ccode<<endl;
	   cout<<"College Name "<<cname<<endl;
   }
   virtual void getfees() = 0;
};
class Student:public College{
     private:
	 int  rno;
	 char sname[20];
	 public:
	void getdetails(){
           cout<<"Enter roll no,name"<<endl;
		   cin>>rno>>sname;    
	 }
	 void showdetails(){
		 cout<<"Roll no. "<<rno<<endl;
		 cout<<"Student name"<<sname<<endl;
		 cout<<"College fees "<<fees<<endl;
	 }
	 void getfees(){
		 cout<<"ENter fees";
		 cin>>fees;
	 }
};
int main(){
    Student s1;
	s1.getdata();
	s1.getdetails();
	s1.getfees();
	s1.showdata();
	s1.showdetails();
	
}