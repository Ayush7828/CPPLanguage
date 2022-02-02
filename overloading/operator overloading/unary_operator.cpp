// unary operator ++

#include <iostream>
using namespace std;
class A
{
private:
	int x;
	int y;

public:
	void getdata()
	{
		cout << "Enter value of X,Y " << endl;
		cin >> x >> y;
	}
	void showdata()
	{
		cout << "Value of x" << x << "\t"
			 << "value of y " << y
			 << endl;
	}
	// unary operator 
	void operator ++(){
		++x;
		++y;
		cout<<"Prefix operator "<<endl;
	}
	void operator ++ (int d){
		x++;
		y++;
		cout<<"Postfix operator "<<endl;
	}
};
int main()
{   
	  A obj1,obj2;
	  obj1.getdata();
	  ++obj1;
	  obj1.showdata();
	  obj2.getdata();

	  obj2++;
	  obj2.showdata();
	
	return 0;
}