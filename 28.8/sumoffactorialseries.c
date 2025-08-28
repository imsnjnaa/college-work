#include <stdio.h>
#include <math.h>
int main(){
    int n,i,x,fact,sum=1;
    printf("\n enter range: ");
    scanf("%d", &n);
    printf("\n enter x value: ");
    scanf("%d", &x);
    for (i=1;i<=n;++i)
    fact=fact*n;
    --n;
    {sum=sum+pow(x,i)/fact;}
    printf("\n sum=%d", sum);
    return 0;
}