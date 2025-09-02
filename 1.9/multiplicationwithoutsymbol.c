#include <stdio.h>
int multiply(int x,int y){
    if (y==1)
    return x;
    else if (x==1)
    return y;
    else if (x==0 || y==0)
    return 0;
    else
    return x+multiply(x,--y);
}
int main(){
    int n,m,res;
    printf("\nenter two values: ");
    scanf("%d%d", &n, &m);
    res=multiply(n,m);
    printf("\nmultiplication is %d",res);
}