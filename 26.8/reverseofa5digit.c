#include <stdio.h>
int main(){
    int n,n1,n2,n3,n4,n5,res;
    printf("\n enter any five digit number:", n);
    scanf("%d", &n);
    n1=n%10;
    n=n/10;
    n2=n%10;
    n=n/10;
    n3=n%10;
    n=n/10;
    n4=n%10;
    n=n/10;
    n5=n%10;
    res=(n1*10000)+(n2*1000)+(n3*100)+(n4*10)+(n5*1);
    printf("\nreverse of a five digit number is %d",res);
    return 0;
}
