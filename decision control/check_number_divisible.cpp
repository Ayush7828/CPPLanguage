#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter  a number "<<endl;
	cin>>num;

	if(num%5==0||num%11==0){
		cout<<"This is divisible "<<endl;

	}
	else{
		cout<<"This is not divisible"<<endl;
	}
	return 0;
}