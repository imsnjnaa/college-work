#include <stdio.h>
int main(){
    int n, res;
    printf("\nenter any three digit number:", n);
    scanf("%d", &n);
    res=n%10;
    printf("\nlast digit of a number is given as %d",res);
    return 0;
    
}