#include <iostream>
using namespace std;
class Sum
{
private:
	int a, b, c, d, e, sum = 0;

public:
	void getdata()
	{
		cout << "Enter a five value " << endl;
		cin >> a >> b >> c >> d >> e;
	}
	void showdata()
	{
		sum += a + b + c + d + e;
		cout << "Sum:" << sum << endl;
	}
};
int main()
{
	Sum s1[5];
	for (int i = 0; i < 5; i++)
	{
		/* code */
		s1[i].getdata();
	}

	for (int i = 0; i < 5; i++)
	{
		/* code */
		s1[i].showdata();
	}
	return 0;
}