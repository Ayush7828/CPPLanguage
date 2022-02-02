#include<iostream>
using namespace std;
class S{
   private:
   int a,b,temp;
   public:
   void getdata(){
	   cout<<"Enter a two value A and B:"<<endl;
	   cin>>a>>b;

   }
   void showdata(){
	   cout<<"Before swapping: "<<a<<" "<<b<<endl;
   }
      
      friend void swap1(S);
};
void swap1(S obj1){
   obj1.temp=obj1.a;
   obj1.a=obj1.b;
   obj1.b=obj1.temp;
   cout<<obj1.a<<" "<<obj1.b<<endl;
}

int main(){
      S obj1;
      obj1.getdata();
      obj1.showdata();
      swap1(obj1);

	return 0;
}