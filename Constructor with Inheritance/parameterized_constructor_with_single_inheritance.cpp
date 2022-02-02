#include<iostream>
using namespace std;
class A{
	private:
	int x;
	public:
	 A(int a){
      x=a;
	  cout<<"Parameterized constructor at Base class "<<endl;
	 }
	 void showx(){
		 cout<<"value of x "<<x<<endl;
	 }
};
class B:public A{
	private:
	int y;
    public:
	B(int a,int b):A(a)
	{
		y=b;
		cout<<"Parameterized constructor at derived class "<<endl;
	}
  void showy(){
	  cout<<"Value of Y "<<y<<endl;
  }


};
int main(){
	   B obj1(20,52);
	   obj1.showx();
	   obj1.showy();

}