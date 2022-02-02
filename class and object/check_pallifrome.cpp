#include<iostream>
using namespace std;
class Pallidrome{
	private:
	int n;
	public:
	void getdata(){
		cout<<"Enter a number :"<<endl;
		cin>>n;
	}
	void check(){
		if(n/100==n%10){
			cout<<"It is a pallidrome"<<endl;
		}
		else{
			cout<<"It is a not a pallidrome"<<endl;
		}
	}

};
int main(){
      Pallidrome obj1;
	  obj1.getdata();
	  obj1.check();
	  return 0;
}