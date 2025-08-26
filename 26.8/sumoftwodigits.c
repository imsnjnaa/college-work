#include <stdio.h>
int main(){
    int n,n1,n2,res;
    printf("\n enter any four digit number:", n);
    scanf("%d", &n);
    n1=n%10;
    n=n/10;
    n2=n%10;
    res=n1+n2;
    printf("\n sum of two digits of a number is %d",res);
    return 0;
    
    
}