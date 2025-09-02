
#include <stdio.h>
int main(){
    int arr[10],i,max,*p;
    printf("\nenter array: ");
    for (i=0;i<10;++i)
    {scanf("%d",&arr[i]);
    p=arr;
    max=*p;
    for (i=0;i<10;++i)
    {if (max<*p)
        max=*p;}
    ++p;}
    printf("\nmax=%d",max);
return 0;
}


