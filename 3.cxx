#include <iostream>

using namespace std;

class Area{

    float const PI = 3.14;

public:

    float calculate(float length, float breadth){
        return length * breadth; //Rectangle
    }

    float calculate(float radius){
        return PI * radius * radius;
    }
};

int main(){
    Area areaCalculator;
    //Area of rectangle
    cout<<"Area of rectangle : "<<areaCalculator.calculate(20.5, 5.5)<<endl;
    cout<<"Area of circle : "<< areaCalculator.calculate(3.4);

    return 0;
}