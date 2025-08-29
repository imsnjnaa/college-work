#include<stdio.h>
int re(int);
int main(){
    int n,b=1;
    printf("\n enter any number: ");
    scanf("%d",&n);
    b=re(n);
    printf("\n the reverse of the given number is %d",b);
return 0;
}
int re(int n){
    int rev=0,rem;
    while (n>0)
    {rem=n%10;
    rev=rev*10+rem;
    n=n/10;}
return rev;
}
