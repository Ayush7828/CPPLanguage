#include<iostream>
using namespace std;
class Average{
  private:
  int a,b,c,sum=0,avg;
  public:
  void getdata(){
	  cout<<"Enter a value of A, B and C:"<<endl;
	  cin>>a>>b>>c;
  }
  void showdata(){
	  cout<<"Output"<<a<<" "<<b<<" "<<c;
  }
  friend void avg1(Average);
};
void avg1(Average obj1){
	  obj1.sum=obj1.a+obj1.b+obj1.c;
      obj1.avg=(obj1.a+obj1.b+obj1.c)/3;
	  cout<<"Sum :"<<obj1.sum<<endl;
	  cout<<"Average:"<<obj1.avg<<endl;
}
int main(){
	Average obj1;
	obj1.getdata();
	obj1.showdata();
	avg1(obj1);

	return 0;
}