#include<iostream>
using namespace std;
int main(){
	int n,r,sum=0,temp;
	cout<<"Enter a number:"<<endl;
	cin>>n;
	temp=n;
	while (n>0)
	{
		r=n%10;
		sum+=r*r*r;
		n=n/10;

	}
	if(temp==sum){
		cout<<"Yes it is a armstrong"<<endl;

	}
	else{
		cout<<"It is a not a armstrong"<<endl;
	}
	return 0;
}