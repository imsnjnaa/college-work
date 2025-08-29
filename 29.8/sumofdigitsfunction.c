#include <stdio.h>
int sum(int n);
int main(){
    int n,rev;
    printf("\nenter any number: ");
    scanf("%d", &n);
    rev=sum(n);
    printf("\nthe sum of digits in the number is: %d", rev);
return 0;
}
int sum(int n){
    int add,rem,rev=0;
    while(n>0){
        rem=n%10;
        rev=rev+rem;
        n=n/10;}
        return rev;
}


