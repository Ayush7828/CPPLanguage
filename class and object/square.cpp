#include<iostream>
using namespace std;
class Square{
    private:
	int num,a;
	public:
	void getdata(){
		cout<<"Enter a number :"<<endl;
		cin>>num;
	}
	void showdata(){
		a=num*num;
		cout<<"Square :"<<a;
	}
};
int main(){
	Square obj1;
	obj1.getdata();
	obj1.showdata();
	return 0;
}