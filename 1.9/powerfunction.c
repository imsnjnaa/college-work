#include <stdio.h>
#include <math.h>
int power(int x,int y){
    if (y==1)
    return x;
    else if (x==1)
    return 1;
    else if (y==0)
    return 1;
    else if (x==0)
    return 0;
    else
    return x*pow(x,y-1);
}
int main(){
    int n,m,res;
    printf("\nenter two values: ");
    scanf("%d%d", &n, &m);
    res=pow(n,m);
    printf("\nthe result is %d",res);
}