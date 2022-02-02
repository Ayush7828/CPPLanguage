#include<iostream>
using namespace std;
int main(){
   char ch;
   cout<<"Enter a character "<<endl;
   cin>>ch;
   if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z'){
	   cout<<"It is a charcter"<<endl;
   }
  else if(ch>=48&&ch<=57){
	  cout<<"this is number "<<endl;
  }
  else{
	  cout<<"This is a symbol"<<endl;
  }
  return 0;

}