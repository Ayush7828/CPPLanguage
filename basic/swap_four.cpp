#include<iostream>
using namespace std;
int main(){
	int n,h,t,u,s,k;
	cout<<"Enter a number"<<endl;
	cin>>n;
	k=n/1000;
	h=(n-k*1000)/100;
	t=((n-k*1000)/10)%10;
	u=n%10;
	s=(u*1000)+(h*100)+(t*10)+(k*1);
	cout<<"Swap number :"<<s;


}