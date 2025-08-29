#include <stdio.h>
int f(int,int);
int main(){
    int a,b,res,rev,n;
    printf("\nenter 2 numbers: ");
    scanf("%d%d", &a,&b);
    rev=f(a,b);
    printf("\nthe sum of two numbers is: %d", rev);
    return 0;
}
int f(int a, int b){
    int res;
    res=(a+b)*(a+b)+(2*a)+(2*b)+(4*a)/2;
        return res;
}


