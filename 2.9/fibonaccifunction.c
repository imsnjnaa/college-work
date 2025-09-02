#include <stdio.h>
int fibonacci(int n){
    if (n==0)
    return 0;
    if (n==1)
    return 0;
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int f0=0,f1=1,f2,n,i;
    printf("\nenter range: ");
    scanf("%d", &n);
    printf("\n%d\t%d", f0,f1);
    for (i=3;i<=n;++i)
    {f2=f0+f1;
    printf("\t%d",f2);
    f0=f1;
    f1=f2;}

    return 0;
}