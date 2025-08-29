#include<stdio.h>
int factorial(int);
int main(){
    int n,fact=1;
    printf("\n enter any one value: ");
    scanf("%d",&n);
    fact=factorial(n);
    printf("\n the factorial of the number is %d",fact);
    return 0;
}
int factorial(int n){
    int fact=1;
    while (n>0)
    {fact=fact*n;
        --n;}
}
    return fact;
    }