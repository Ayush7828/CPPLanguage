#include<iostream>
using namespace std;
int main(){
	int english,physics,chemistry,hindi,c;
	cout<<"Enter a english, physics,chemistry,hindi,c:"<<endl;
	cin>>english>>physics>>chemistry>>hindi>>c;

	float result=0;
	result=(english+physics+chemistry+hindi+c)/5;

	cout<<"result:"<<result<<endl;

	if(result<40){
		cout<<"Fail"<<endl;
	}
	else{
		cout<<"Pass"<<endl;
	}
	return 0;
}