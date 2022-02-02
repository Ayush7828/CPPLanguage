#include<iostream>
using namespace std;
class A{
   private:
   int x,y,z;
   public:
   A operator +(A obj1){
	   A temp;
	   temp.x=x+obj1.x;
	      temp.y=y+obj1.y;
		  return (temp);

   }
   void getdata(){
	   cout<<"Enter value of x and y "<<endl;
	   cin>>x>>y;
   }
   void showdata(){
	   cout<<"Value of x"<<x<<endl;
	    cout<<"Value of y"<<y;
	

   }
};
int main(){
    A obj1,obj2,obj3;
	obj1.getdata();
	obj2.getdata();

	obj3=obj1+obj2;
	obj3.showdata();
}