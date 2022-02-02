#include<iostream>
using namespace std;
class Simpleinterest{
  private:
  int p,r,t,si;
  public:
  void getdata();
  void showdata();
};
void Simpleinterest::getdata(){
	cout<<"Enter a principle ,rate and time:"<<endl;
	cin>>p>>r>>t;
}
void Simpleinterest::showdata(){
	si=(p*r*t)/100;
	cout<<"Simple interest:"<<si<<endl;
}
int main(){
	Simpleinterest obj1;
	obj1.getdata();
	obj1.showdata();
	
	return 0;
}