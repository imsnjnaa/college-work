#include <stdio.h>
int main(){
    int n,rem,sum;
    printf("\nenter any number: ");
    scanf("%d", &n);
    while(n>0){
        n=n/10;
        sum=sum+rem;
    }
    printf("\nthe number of digits in the number is: %d", count);
return 0;
}