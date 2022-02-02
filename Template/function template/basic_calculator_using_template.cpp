#include<iostream>
using namespace std;
template <class T1,class T2>void mul(T1 a, T2 b){
	T1 c;
	c=a*b;
	cout<<"Multiply:"<<c<<endl;



}
template <class T1,class T2>void sum(T1 a, T2 b){
	T1 c;
	c=a+b;
	cout<<"Sum :"<<c<<endl;



}
template <class T1,class T2>void divide(T1 a, T2 b){
	T1 c;
	c=a/b;
	cout<<"Divide :"<<c<<endl;



}
template <class T1,class T2>void modules(T1 a, T2 b){
	T1 c;
	c=a%b;
	cout<<"Modules :"<<c<<endl;



}
int main(){
    mul(4,5);
	sum(2.5,8.4);
	divide(50,4);
	modules(45,82);
	return 0;
}
