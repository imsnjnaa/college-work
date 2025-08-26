#include <stdio.h>
int main(){
    int a,b,c,res1,res2;
    printf("\nenter any three marks:", a,b,c);
    scanf("%d%d%d", &a,&b,&c);
    res1=(a+b+c);
    printf("\ntotal marks of three students is %d", res1);
    res2=(a+b+c)/3;
    printf("\ntotal percentage of three papers is %d",res2);
    return 0;
}