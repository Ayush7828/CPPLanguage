#include <iostream>
using namespace std;
class Book
{
private:
	int bcode;
	char bname[25];
	int price;

public:
	inline void getdata();
	inline void showdata();
};
// use scope operator::
void Book::getdata()
{
	cout << "Enter  a book code ,book name and book price :" << endl;

	cin >> bcode >> bname >> price;
}
void Book::showdata()
{
	cout << "Book code:" << bcode << endl;
	cout << "Book name:" << bname << endl;
	cout << "Book price:" << price << endl;
}

int main()
{
	Book b1;
	b1.getdata();
	b1.showdata();

	return 0;
}