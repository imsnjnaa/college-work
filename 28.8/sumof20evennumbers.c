#include <stdio.h>
#include <math.h>
int main(){
    int sum=0,i;
    for (i=1;i<=20;++i)
    if (i%2==0)
    {sum=sum+i;}
    printf("\n sum of even number is: %d", sum);
    return 0;
}