#include<iostream>
using namespace std;
class Swap{
       
	   private:
	   int a,b,temp;
	   public:
	   void getdata(){
		   cout<<"Enter  a value of A and B :"<<endl;
		   cin>>a>>b;
	   }
	   void showdata(){
		   temp=a;
		   a=b;
		   b=temp;
		   cout<<"After swapping program:"<<a<<" "<<b<<endl;
	   }
};
int main(){
	Swap obj1;
	obj1.getdata();
	obj1.showdata();
	return 0;
}