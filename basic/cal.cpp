#include <iostream>
using namespace std;
int main()
{
	int a, b, sum = 0, sub, mul, div, mod;
	cout << "Enter a value of A and B :" << endl;
	cin >> a >> b;
	sum = a + b;
	sub = a - b;
	mul = a * b;
	div = a / b;
	mod = a % b;
	cout << "Sum :" << sum << "\n"
		 << "Subtract :" << sub << "\n"
		 << "Multipl:y " << mul << "\n"
		 << "Divide :" << div << "\n"
		 << "Modules " << mod << endl;
	return 0;
}