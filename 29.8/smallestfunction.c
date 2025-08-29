#include <stdio.h>
int smallest(int a, int b)
{if (a<b)
{return a;}
else
{return b;}}
int main(){
    int x,y,m;
    printf("\nenter 2 values: ");
    scanf("%d%d",&x,&y);
    m=smallest(x,y);
    printf("\nsmallest number is: %d",m);
    return 0;
}