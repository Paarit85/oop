#include <stdio.h>

struct Complex{
    int real, imag;
};

int main(){
    struct Complex c1,c2,c3;

    printf("Enter first complex number (first real and then imaginary) : \n");
    scanf("%d%d", &c1.real, &c1.imag);
    printf("Enter second complex number (first real and then imaginary) : \n");
    scanf("%d%d", &c2.real, &c2.imag);

    c3.real=c1.real+c2.real;
    c3.imag=c1.imag+c2.imag;

    printf("The sum is : %d + i%d", c3.real, c3.imag);

    return 0;
}