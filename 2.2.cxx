#include <iostream>

using namespace std;

class Student{
    char name[20];
    int roll;
    float marks;
    char address[20];
public:
    void getData(){
        cout<<"Enter the name : ";
        cin>>name;
        cout<<"Enter the roll : ";
        cin>>roll;
        cout<<"Enter the marks : ";
        cin>>marks;
        cout<<"Enter the address : ";
        cin>>address;

    }

    void showData(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll : "<<roll<<endl;
        cout<<"Marks : "<<marks<<endl;
        cout<<"Address : "<<address<<endl;
    }
};
int main()
{
	Student s;
	int n;
	cout<<"Enter total no. of students:";
	cin>>n;
	for(int i=0;i<n;i++){
		s.getData();
		s.showData();
	}
	return 0;
}
		