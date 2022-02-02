#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;

	if(n/100==n%10){
		cout<<"it is pallidrome"<<endl;
	}
	else{
		cout<<"It is not a pallidrome"<<endl;
	}
	return 0;
}