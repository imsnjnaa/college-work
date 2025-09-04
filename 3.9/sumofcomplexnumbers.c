#include <stdio.h>
#include <string.h>
    struct complex{
        char name[50];
        float real,imag;
    };
int main(){
    struct complex c1,c2,sum;
    printf("enter first complex number: ");
    scanf("%f%f",&c1.real,&c1.imag);
    printf("enter second complex number: ");
    scanf("%f%f",&c2.real,&c2.imag);
    sum.real=c1.real+c2.real;
    sum.imag=c1.imag+c2.imag;
    printf("\nsum of two complex number is sum=%.2f+%.2f",sum.real,sum.imag);
    return 0;
} 