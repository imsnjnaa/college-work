#include <stdio.h>
int f(int n){
    int f=1;
    while (n>0)
    {
        f=f*n;
        --n;
    }
    return f;
}
int main(){
    int n,sum=0,rem,nsave;
    printf("\nenter number: ");
    scanf("%d", &n);
    nsave=n;
    while (n>0)
       {rem=n%10;
        sum=sum+f(rem);
        n=n/10;}
    if (sum==nsave)
    {printf("\npeterson number");}
    else
    {printf("\nnot a peterson number");}
return 0;}