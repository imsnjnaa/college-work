#include <stdio.h>
int main()
{int num =5, k=3;
    if (num & (1 << (k-1)))
    printf(" %d bit of %d is SET",k,num);
    else
    printf(" %d bit of %d is not SET",k,num);
    return 0;
}