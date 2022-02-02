#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter a number "<<endl;
	cin>>n;
	if(n/100==n%10){
		cout<<"Yes it is a  pallidrome"<<endl;
	}
	else{
		cout<<"No it is a not a pallidorme"<<endl;
	}
	 return 0;
}