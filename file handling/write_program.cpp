#include<iostream>
#include<fstream>

using namespace std;
 int main(){
	 ofstream objw;
	 objw.open("ayush.txt");
	 objw<<"Hello my name is ayush singh"<<endl;
	 objw.close();
	 cout<<"data saved in file "<<endl;
 }