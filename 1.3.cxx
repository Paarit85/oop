#include <iostream>

using namespace std;

class Area{

    float const PI = 3.14;

public:

    float calc(float length, float breadth){
        return length * breadth; 
    }

    float calc(float radius){
        return PI * radius * radius;
    }
};

int main(){
    Area a;
    cout<<"Area of rectangle : "<<a.calculate(9.88, 2.3)<<endl;
    cout<<"Area of circle : "<< a.calculate(8.66);

    return 0;
}
