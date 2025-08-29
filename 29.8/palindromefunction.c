#include <stdio.h>
int palindrome(int n);
int main(){
    int n,rev,nsave,p;
    printf("\n enter any number: ");
    scanf("%d", &n);
    nsave=n;
    p=palindrome(n);
    if (rev=nsave)
    {printf("\n the number is a palindrome");}
    else
    {printf("\n the number is not a palindrome");}
    return 0;
}
int palindrome(int n){
    int rem=0,rev,nsave;
while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;}
    return rev;}

