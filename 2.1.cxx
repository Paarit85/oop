#include<iostream>
using namespace std;
class student
{
	char name[20];
	int roll;
	char add[15];
	float marks;
	public:
	void getdata(){
		cout<<"Enter your name , roll no. , marks , and address respectively:";
		cin>>name>>roll>>marks>>add;
		cout<<endl;
	}
	void showdata(){
		cout<<"The entered details are:";
		 cout<<name<<' '<<roll<<' '<<marks<<' '<<add<<endl;
	}
};
int main()
{
	student s;
	s.getdata();
	s.showdata();
	return 0;
}