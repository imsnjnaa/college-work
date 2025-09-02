#include <stdio.h>
int factorial(int n){
    if (n==0 || n==1)
    return 1;
    else
    return n*factorial(n-1);
}
int main(){
    int n,fact;
    printf("\nenter value: ");
    scanf("%d", &n);
    fact=factorial(n);
    printf("\nfactorial is %d",fact);
}