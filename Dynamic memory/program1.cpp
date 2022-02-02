#include<iostream>
#include<string.h>

using namespace std;
class Student{
    private:
	int count;
	char *name;
	public:
	Student(char nm[]){
		count=strlen(nm);
		name=new char[count+1];
		strcpy(name,nm);
		cout<<"Dyanmic constructor:"<<endl;
	}
	Student(){
		delete(name);
		cout<<"Destructor "<<endl;

	}
	void showdata(){
		cout<<"Name "<<name<<endl;
		cout<<"No of alphabets:"<<count;
	}

};
int main(){

    Student s1 ("Ayush");
	s1.showdata();
	return 0;
}