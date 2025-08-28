#include <stdio.h>
#include <math.h>
int main(){
    int f0=0,f1=1,f2,n,i;
    printf("\n enter range: ");
    scanf("%d", &n);
    printf("\n%d\t%d", f0,f1);
    for (i=3;i<=n;++i)
    {f2=f0+f1;
    printf("\t%d",f2);
    f0=f1;
    f1=f2;}
    return 0;
}