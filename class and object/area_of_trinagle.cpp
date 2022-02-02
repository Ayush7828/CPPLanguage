#include<iostream>
using namespace std;
class Area{
	private:
	int base,height,area;
	public:
	void getdata(){
     cout<<"Enter a base and height:"<<endl;
	 cin>>base>>height;
	}
	void showdata(){
		area=(base*height)/2;
		cout<<"Area of Traingle is :"<<area<<endl;
	}
};
int main(){
	// aera of triangle= base*height/2
	Area obj1;
	obj1.getdata();
	obj1.showdata();
	
	return 0;
}