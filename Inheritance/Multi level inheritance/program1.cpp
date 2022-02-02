//multi level inheritance 
#include<iostream>
using namespace std;
class Author{
   private:
   int acode;
   char aname[20];
   public:
   void getauthor(){
	   cout<<"Enter a author code and author name :"<<endl;
	   cin>>acode>>aname;
   }
   void showauthor(){
	   cout<<"Author code :"<<acode<<endl;
	   cout<<"Author name :"<<aname<<endl;

   }
};
class Publisher:public Author{
   private:
   int pid;
   char pname[20];
   public:
   void getpub(){
	   cout<<"Enter a publisher id ,publisher name :"<<endl;
	   cin>>pid>>pname;
   }
   void showpub(){
	   cout<<"Publisher id "<<pid<<endl;
	   cout<<"Publisher name "<<pname<<endl;
   }
};
class Book:public Publisher{
    private:
	int bcode;
	char bname[20];
	int price;
	public:
	void getbook(){
		cout<<"Entera book  code , Book name and Book price "<<endl;
		cin>>bcode>>bname>>price;

	}
	void showbook(){
		cout<<"Book code "<<bcode<<endl;
		cout<<"Book Name "<<bname<<endl;
		cout<<"Book price "<<price<<endl;
	}
};
int main(){
	  Book b1;
	  b1.getauthor();
	  b1.getpub();
	  b1.getbook();
	  b1.showauthor();
	  b1.showpub();
	  b1.showpub();
}