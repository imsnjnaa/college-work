#include <stdio.h>
#include "sanjana.h"
int main(){
    int x,y,m;
    printf("\nenter two values: ");
    scanf("%d%d",&x,&y);
    m=max(x,y);
    printf("\nmax value is %d",m);
    return 0;
}