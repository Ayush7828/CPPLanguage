#include<iostream>
using namespace std;
class A{
     private:
	 int x,y,z;
	 public:
	 void getdata(){
		 cout<<"Enter a two value:"<<endl;
		 cin>>x>>y;
	 }
	 void showdata(){
		 cout<<"Show:"<<x<<" "<<y<<endl;
	 }
	 friend void sum(A);
};
void sum(A obj1){
	obj1.z=obj1.x+obj1.y;
	cout<<obj1.z;
}
int main(){
	A obj1;
	obj1.getdata();
	obj1.showdata();
	sum(obj1);
	return 0;
}