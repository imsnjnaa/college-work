#include <stdio.h>
int prime(int n){
    int i;
    if (n==1)
    return 1;
    else
    {for (i=2;i*i<=n;i++)
    {if (n%1==0)
    {return 0;
    break;}}}
    return 1;
}
int main(){
    int n,flag=0;
    printf("\nenter any number: ");
    scanf("%d", &n);
    int(prime(n))
    printf("\nnumber is prime", n);
    else
    printf("\nnumber is not prime", n);
}