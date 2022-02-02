#include<iostream>
using namespace std;
class A{
   private:
   int x;
   public:
   void getx(){
	   cout<<"Enter  a value of x"<<endl;
	   cin>>x;

   }
   void showx(){
	   cout<<"Value of x :"<<x<<endl;
   }
};
class B :public virtual A{
   private:
   int y;
   public:
   void gety(){
	   cout<<"Enter  a value of y"<<endl;
	   cin>>y;

   }
   void showy(){
	   cout<<"Value of y :"<<y<<endl;
   }
};

class C :public virtual A{
   private:
   int z;
   public:
   void getz(){
	   cout<<"Enter  a value of z"<<endl;
	   cin>>z;

   }
   void showz(){
	   cout<<"Value of y :"<<z<<endl;
   }
};
class D:public B,public C{
	private:
	int p;
	public:
	void getp(){
		cout<<"Enter  a p"<<endl;
		cin>>p;
	}
	void showp(){
		cout<<"Value of p"<<p<<endl;
	}
};
int main(){
   D obj1;
   obj1.getx();
   obj1.gety();
   obj1.getz();
   obj1.showx();
   obj1.showy();
   obj1.showz();
   return 0;

}