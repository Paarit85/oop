#include<iostream>
using namespace std;
class complex
{
	float real1,real2,real3;
	float imag1,imag2,imag3;
	public:
	void getdata()
	{
		cout<<"First number:"<<endl;
		cout<<"Enter real part";
		 cin>>real1;
		 cout<<endl;
		 cout<<"Enter imaginary part";
		  cin>>imag1;
		  cout<<endl;
		  cout<<"Second number:"<<endl;
		  cout<<"Enter real part";
		  cin>>real2;
		  cout<<endl;
		  cout<<"Enter imaginary part";
		  cin>>imag2;
		  cout<<endl;
	}
	void showdata()
	{
		cout<<"The sum of given two complex number is :"<<real1+real2<<'+'<<imag1+imag2<<'i';
	}
};
int main()
{
		complex c;
		c.getdata();
		c.showdata();
		return 0;
}
		