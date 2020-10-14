#include <iostream>

using namespace std;

inline float Area(float l, float b){
    return l*b;
}

int main(){
    float l,b;
    cout<<"Enter length and breadth :"<<endl;
    cin>>l>>b;
    cout<<"Area(l,b) : "<<Area(l,b);
    return 0;
}