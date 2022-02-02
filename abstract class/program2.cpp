#include<iostream>
using namespace std;
class Shape{
protected:
int a,b,h;
public:
void getdata(){
	cout<<"Enter  a value of b and h"<<endl;
	cin>>b>>h;
}
 virtual void area()=0;

};
class Triangle:public Shape{
     public:
	 void area(){
		 a=0.5*b*h;
		 cout<<"Area of triangle :"<<a<<endl;
	 }
};
class Rectangle:public Shape{
    public:
	void area(){
		a=b*h;
		cout<<"Area of rectangle :"<<a<<endl;
	}
};
 int main(){
       Shape *p;
	   Triangle t;
	   Rectangle r;
	   p=&t;
	   p->getdata();
	   p->area();
	   p=&r;
	   p->getdata();
	   p->area();
	   return 0;
 }