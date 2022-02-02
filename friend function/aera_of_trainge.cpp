#include<iostream>
using namespace std;
class Triangle{
   
   private:
   int l,b,area;
   public:
   void getdata(){
	   cout<<"Enter a value of Lenght and breadth:"<<endl;
	   cin>>l>>b;
   }
    void showdata(){
		cout<<"show "<<l<<" "<<b<<endl;
	}
	friend  void  area(Triangle);
};
void area(Triangle obj1){
	obj1.area=(obj1.l*obj1.b)/2;
	cout<<obj1.area;
}
int main(){
	Triangle obj1;
	obj1.getdata();
	obj1.showdata();
	area(obj1);
	return 0;
}