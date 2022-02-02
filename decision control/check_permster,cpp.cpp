#include<iostream>
using namespace std;
int main(){
	int l,b;
	cout<<"Enter a length and breadth "<<endl;
	cin>>l>>b;
	 int area=l*b;
	 int perimeter=2*(l+b);
	 
	 if(area>perimeter){
		 cout<<"Area is greater "<<endl;

	 }
	 else{
		 cout<<"Perimeter is greater "<<endl;
	 }
	 return 0;
}