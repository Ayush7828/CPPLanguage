#include<iostream>
using namespace std;
class Simple{
         private:
		 int p,r,t,si;
		 public:
		 void getdata(){
			 cout<<"Enter a Principle ,rate and time:"<<endl;
			 cin>>p>>r>>t;

		 }
		 void showdata(){
			 si=(p*r*t)/100;
			 cout<<"Simple interest:"<<si<<endl;
		 }
};
int main(){
	Simple obj1;
	obj1.getdata();
	obj1.showdata();

	return 0;
}