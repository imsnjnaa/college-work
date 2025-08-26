#include <stdio.h>
int main(){
    int a,b,c,res;
    printf("\nenter any three numbers:", a,b,c);
    scanf("%d%d%d", &a,&b,&c);
    res=(a+b+c)/3;
    printf("\naverage of three numbers is %d", res);
    return 0;
    
    
}