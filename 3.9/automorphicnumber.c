#include <stdio.h>
int main(){
    int a,res;
    printf("enter any number: ");
    scanf("%d",&a);
    res=a*a;
    if (res%100==a)
    {printf("automorphic number");}
    else
    {printf("not automorphic number");}
    return 0;
}