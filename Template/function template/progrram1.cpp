#include<iostream>
using namespace  std;
template <class T1, class T2>void sum(T1 a,T2 b){
	T1 c;
	c=a+b;
	cout<<"Result :"<<c<<endl;
}
int main(){
      sum(2,5);
	  sum(4,5.6);
	  sum(2.4,8.9);
	  sum(2.8,9);
	  sum('A',32);
	  sum(32,'A');
	  return 0;
}
	// namespace  std;
