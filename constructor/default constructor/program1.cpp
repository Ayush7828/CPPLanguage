#include<iostream>
using namespace std;
class A{
  private:
  int x,y;
  public:
  // make default constructor
  A(){
	  x=10;
	  y=50;
	  cout<<"Default constructor: "<<endl;

  }
  void showdata(){
   cout<<x<<" "<<y<<endl;

  }
};
int main(){
	// call constructor
	A obj1,obj2;
	obj1.showdata();
	obj2.showdata();

	return 0;
}