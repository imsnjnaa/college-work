#include <stdio.h>
int main(){
    int n,rev,rem=0,nsave;
    printf("\n enter any number: ");
    scanf("%d", &n);
    nsave=n;
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if (rev=nsave)
    {printf("\n the number is a palindrome");}
    else
    {printf("\n the number is not a palindrome");}
    return 0;
}