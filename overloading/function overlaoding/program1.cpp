#include<iostream>
using namespace std;
class A{
	private:
       int x,y,z,s;
	   float t;
	   double p;
	   public:
	   void sum(){
		   cout<<"Enter a value of x and y"<<endl;
		   cin>>x>>y;
		   z=x+y;
		   cout<<"Sum "<<z<<endl;
	   }
	   void sum(int x,int y){
		   s=x+y;
		   cout<<"Sum of"<<s<<endl;
	   }
	     void sum(float x,float y){
		   t=x+y;
		   cout<<"Sum of"<<t<<endl;
	   }
	   void sum(double x,double y){
		   p=x+y;
		   cout<<"Sum of"<<p<<endl;
	   }
	   int sum(int x,int y,int z){
		   return (x+y+z);
	   }

};
int main(){
   A obj1;
   obj1.sum(5,4);
   obj1.sum(2.5f,7.8f);
   obj1.sum(5.4,8.9);
   cout<<"Sum  of x,y,z"<<obj1.sum(4,8,2)<<endl;
   obj1.sum();
   return 0;
}