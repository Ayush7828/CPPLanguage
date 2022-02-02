#include<iostream>
using namespace std;
int main(){

	int p,r,t;
	cout<<"Enter a principle ,rate and time "<<endl;
	cin>>p>>r>>t;
	int si=p*r*t/100;
	cout<<"Simple interest is :"<<si<<endl;
	return 0;
}