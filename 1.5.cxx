#include <iostream>

using namespace std;

class Area{
public:
    void calculate(float length=10,float breadth=5){
    cout<<"The area is : "<<length*breadth;
}
};


int main(){
   Area calculator;
   calculator.calculate();
}