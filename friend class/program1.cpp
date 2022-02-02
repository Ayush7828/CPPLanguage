//friend class is 
//member function of a friend class can access priavte and protected data member of another class

#include<iostream>
using namespace std;
class A{
     private:
	 int x;
	 public:
	 void getdata(){
		 cout<<"Enter a first value:"<<endl;
		 cin>>x;

	 }
	 void showdata(){
		 cout<<"First:"<<x;

	 }
	 friend class B;
};
class B{
    private:
	int y;
	public:
	void getdata(){
		cout<<"Enter a second value :"<<endl;
		cin>>y;

	}
	void showdata(){
		cout<<"Second :"<<y<<endl;
	}
	void sum(A &obj){
       int z=obj.x+y;
	   cout<<"Sum:"<<z;
	}
};
int main(){
	A  obj1;
	B obj2;
	obj1.getdata();
	obj2.getdata();
	obj1.showdata();
	obj2.showdata();
	obj2.sum(obj1);
	return 0;
}
