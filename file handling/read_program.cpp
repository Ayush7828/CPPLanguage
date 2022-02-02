#include<iostream>
#include<fstream>
using namespace std;
int main(){
  char ch;
  ifstream objr;
  objr.open("ayush.txt");
  while (!objr.eof())
  {
	  /* code */
	  objr>>ch;
	  cout<<ch;
  }
  objr.close();
  
}