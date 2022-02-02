#include<iostream>
using namespace std;
class Avg{
	private:
	int a,b,c,sum=0,average;
	public:
	void getdata(){
		cout<<"Enter a three numbers:"<<endl;
		cin>>a>>b>>c;

	}
	void sum1(){
		sum+=a+b+c;
		cout<<"Sum :"<<sum<<endl;
	}
	void average1(){
           average=(a+b+c)/3;
		   cout<<"Average is :"<<average<<endl;
	}
};
int main(){
	Avg obj1;
	obj1.getdata();
	obj1.sum1();
	obj1.average1();
	
	return 0;
}