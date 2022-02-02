#include<iostream>
using namespace std;
int main(){
	int num;
	cout<<"Enter a number "<<endl;
	cin>>num;

	if(num<0){
		cout<<"It is a negative number "<<endl;
	}
	else {
		cout<<"It is a positive number "<<endl;
	}
	return 0;
}