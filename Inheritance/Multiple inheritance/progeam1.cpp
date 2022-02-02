// multiple inheritance

#include <iostream>
using namespace std;
class Author
{
private:
	int acode;
	char aname[20];

public:
	void getauthor()
	{
		cout << "Enter a author code and author name " << endl;
		cin >> acode >> aname;
	}
	void showauthor()
	{
		cout << "Author code -" << acode << endl;
		cout << "Author name -" << aname << endl;
	}
};
class Publisher
{
private:
	int pid;
	char pname[10];

public:
	void getpub()
	{
		cout << "Enter a publisher id and publisher name :" << endl;
		cin >> pid >> pname;
	}
	void showpub()
	{
		cout << "Publisher id " << pid << endl;
		cout << "Publisher Name :" << pname << endl;
	}
};
class Book : public Author, public Publisher
{
private:
	int bcode;
	char bname[20];
	int price;

public:
	void getdata()
	{
		cout << "Enter Book code ,book name and book price :" << endl;
		cin >> bcode >> bname >> price;
	}
	void showdata()
	{
		cout << "Book code " << bcode << endl;
		cout << "Book name " << bname << endl;
		cout << "Book price " << price << endl;
	}
};
int main()
{
	Book b1;
	b1.getauthor();
	b1.getpub();
	b1.getdata();
	b1.showauthor();
	b1.showpub();
	b1.showdata();
}