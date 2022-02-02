#include<iostream>
using namespace std;
int main(){
	char ch;
	cout<<"Enter a character:"<<endl;
	cin>>ch;
	if(ch>='a'&&ch<='z'){
		cout<<"It is a lowercase"<<endl;

	}
	else if(ch>='A'&&ch<='Z'){
		cout<<"It is a uppercase"<<endl;

	}
	else{
		cout<<"Invaild choice"<<endl;

	}
	return 0;
}