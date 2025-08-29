#include<stdio.h>
int count(int);
int main(){
    int n,b=1;
    printf("\n enter any number: ");
    scanf("%d",&n);
    b=count(n);
    printf("\n the number of digits is %d",b);
return 0;
}
int count(int n){
    int count=0;
    while (n>0)
    {n=n/10;
    count++;}
return count;
}
