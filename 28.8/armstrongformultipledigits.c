#include <stdio.h>
#include <math.h>
int main(){
    int n,sum,rem=0,nsave,count=0;
    printf("\n enter any number: ");
    scanf("%d", &n);
    nsave=n;
    while(n>0){
         n=n/10;
        count++;
    }
    n=nsave;
    while(n>0){
        rem=n%10;
        sum=sum+(pow(rem,count));
        n=n/10;
    }
    if (sum=nsave)
    {printf("\n the number is armstrong");}
    else
    {printf("\n the number is not armstrong");}
    return 0;
}