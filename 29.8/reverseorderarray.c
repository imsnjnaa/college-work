#include <stdio.h>
int main()  
{  
    int arr[]={1,2,3,4,5,6,7,8,9};
    int temp,i,j;
    for (i=0,j=8;i<j;i++,--j)
    {temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;}
    for (i=0;i<9;i++)
    {printf("\n%d",arr[i]);}
    return 0;
}  