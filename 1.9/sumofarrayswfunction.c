
#include <stdio.h>
int fun(int*);
int main(){
    int arr[]={3,6,9,12,15,18};
    int sum1=fun(arr);
    printf("\nsum is %d",sum1);
    return 0;}
int fun(int*p)
{int i,sum=0;
for (i=0;i<6;i++)
{sum=sum+(*p);
p++;}
    return sum; 
}


