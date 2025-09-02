#include <stdio.h>
void swap(int a, int b){
int temp;
temp=a;
a=b;
b=temp;
    printf("\nafter swapping a=%d and b=%d",a,b);}
    int main(){
    int a,b;
    printf("\nenter two values: ");
    scanf("%d%d", &a,&b);
    printf("\nbefore swapping a=%d and b=%d",a,b);
    swap(a,b);
return 0;
}