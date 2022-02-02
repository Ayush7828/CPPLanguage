#include <iostream>
#include <string.h>
using namespace std;
class Employee
{
private:
   int ecode;
   char ename[20];
   int esal;

public:
  // default contructor make
   Employee()
   {
      cout << "Default constructor :" << endl;
      ecode=ec;
      strcpy(ename, en);
      esal = es;
   }
   Employee(int ec,char en[],int es)
   {
      ecode = ec;
      strcpy(ename, en);
      esal = es;
      cout << "Parameterized constructor" << endl;
   }
   void showdata()
   {
      cout << "Employee code:" << ecode << endl;
      cout << "Employee name:" << ename << endl;
      cout << "Employee salaray:" << esal << endl;
   }
};
int main()
{
   Employee e1(10,"ayush",45);

   e1.showdata();
   


  
}