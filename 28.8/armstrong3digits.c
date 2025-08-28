#include <stdio.h>
#include <math.h>
int main(){
    int n,sum,rem=0,nsave;
    printf("\n enter any number: ");
    scanf("%d", &n);
    nsave=n;
    while(n>0){
        rem=n%10;
        sum=sum+(pow(rem,3));
        n=n/10;
    }
    if (sum=nsave)
    {printf("\n the number is armstrong");}
    else
    {printf("\n the number is not armstrong");}
    return 0;
}