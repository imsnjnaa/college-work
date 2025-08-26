#include <stdio.h>
#include <math.h>
int main()
{
    int a=5,b=2;
    float res;
    res=a/b;
    printf("\n res=%f", res);
    res=(float)a/b;
    printf("\n res=%f", res);
    return 0;
}
