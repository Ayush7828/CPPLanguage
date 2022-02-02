#include<iostream>
using namespace std;
class Distance{
  private:
  int feet ,inch;
  public:
  void getdata(){
	  cout<<"Enter a feet and inch "<<endl;
	  cin>>feet>>inch;
  }
  void showdata(){
	  cout<<"Feet "<<feet<<endl;
	  cout<<"Inch "<<inch<<endl;

  }
  Distance operator +(Distance obj){
	  Distance temp;
	  temp.feet=feet+obj.feet;
	  temp.inch=inch+obj.inch;

	  if(temp.inch>=12){
		  temp.feet=temp.feet+temp.inch/12;
		  temp.inch=temp.inch%12;
	  }
	  return (temp);
  }
};
int main(){
      Distance d1,d2,d3;
	  d1.getdata();
	  d2.getdata();
	  d3.getdata();
	  d1.showdata();
	  d2.showdata();
	  d3.showdata();
}