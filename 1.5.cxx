#include <iostream>

using namespace std;

class Area{
public:
    void calculate(int length=8,int breadth=9){
    cout<<"The area is : "<<length*breadth;
}
};


int main(){
   Area c;
   c.calculate();
}
