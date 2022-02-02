#include<iostream>
using namespace std;
class Swap{
	private:
	int a,b,temp;
	public:
	inline void getdata();
	inline void showdata();
	
	
};
void Swap::getdata(){
	cout<<"Enter a two value A and B";
	cin>>a>>b;

}
void Swap::showdata(){
	temp=a;
	a=b;
	b=temp;
	cout<<a<<" "<<b;
}
int main(){
	Swap s1;
	s1.getdata();
	s1.showdata();
	
	return 0;
}