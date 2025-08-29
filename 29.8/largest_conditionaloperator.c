#include <stdio.h>
int largest(int a, int b){
int m=(a>b)? a:b; //conditional operator
return m;}
int main(){
    int x,y,m;
    printf("\nenter 2 values: ");
    scanf("%d%d",&x,&y);
    m=largest(x,y);
    printf("\nlargest number is: %d",m);
    return 0;
}