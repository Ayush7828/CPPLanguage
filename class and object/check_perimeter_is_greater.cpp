#include<iostream>
using namespace std;
class Permeter{
    private:
	int l,b,peri,area;
	public:
	void getdata(){
		cout<<"Enter a number :"<<endl;
		cin>>l>>b;

	}
	void showdata(){
     area=l*b;
	 cout<<"Area:"<<area<<endl;

	 peri=2*(l+b);
	 cout<<"Perimeter:"<<peri<<endl;

	 if(area>peri){
		 cout<<"Area is greater:"<<endl;
	 }
	 else{
		 cout<<"Perimeter is greater:"<<endl;
	 }
	}
};
int main(){
	Permeter obj1;
	obj1.getdata();
	obj1.showdata();
	
	return 0;
}