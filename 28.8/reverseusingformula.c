#include <stdio.h>
int main(){
    int n,rem,rev=0;
    printf("\nenter any number: ");
    scanf("%d", &n);
    while(n>0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("\nthe reverse value of the number is: %d", rev);
   
return 0;
}