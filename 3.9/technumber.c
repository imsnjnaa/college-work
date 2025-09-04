#include <stdio.h>
#include <math.h>
int main(){
    int n,n1,n2,sum,count=0,nsave,d;
    printf("\nenter any number: ");
    scanf("%d", &n);
    nsave=n;
    while(n>0)
    {n=n/10;
    count++;}
    if (count%2!=0)
    {printf("\nnot a tech number");}
    else
    d=pow(10,count/2);
    n1=n/d;
    n2=n/d;
    sum=n1+n2;
    if (sum*sum==n)
    {printf("\nit is a tech number");}
    else
    {printf("\nit is not a tech number");}
return 0;
}