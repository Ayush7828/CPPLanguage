#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout<<"Enter a value of A and B"<<endl;
	cin>>a>>b;
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"Swap number "<<a<<" "<<b<<endl;
	return 0;
}