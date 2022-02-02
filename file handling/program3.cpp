#include<iostream>
#include<fstream>
using namespace std;
// getline function ---> this function is used to read whole sentence 
int main(){
	char ch[100];
	ifstream objr;
	objr.open("ayush.txt");
	objr.getline(ch,100);
	cout<<ch;
	objr.close();
}