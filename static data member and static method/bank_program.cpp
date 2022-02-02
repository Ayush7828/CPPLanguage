#include <iostream>
using namespace std;
class Bank
{
private:
	int acno;
	char cname[10];
	int cbal, dm, wm;
	static int bbal;

public:
	void getdata()
	{
		cout << "Enter account no. customer name,opening balance:" << endl;
		cin >> acno >> cname >> cbal;
		bbal += cbal;
	}
	void showdetails()
	{
		cout << "Account no." << acno << endl;
		cout << "Customer name:" << cname << endl;
		cout << "Balance" << cbal << endl;
	}
	void deposit()
	{
		cout << "Enter amount to deposit" << endl;
		cin >> dm;
		cbal += dm;
		bbal += dm;
	}
	void withdraw()
	{
		cout << "Enter amount to withdrawa " << endl;
		cin >> wm;
		cbal -= wm;
		bbal -= wm;
	}
	static void showtotal()
	{
		cout << "total balnace of bank " << bbal << endl;
	}
};
int Bank::bbal;
int main()
{
	Bank cs1, cs2;
	cs1.getdata();
	cs2.getdata();
	cs1.deposit();
	cs2.deposit();
	cs1.withdraw();
	cs2.withdraw();
	cs1.showdetails();
	cs2.showdetails();
	Bank::showtotal();
}