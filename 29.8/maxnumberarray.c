#include <stdio.h>
int main()  
{  
    int arr[100],i,sum=0,n,max,min;  
    printf("\nenter size of array: ");  
        scanf("%d",&n);  
    printf("\nenter array elements: ");
    for (i=0;i<n;++i)
    {scanf("%d",&arr[i]);}
    max=arr[0];
    min=arr[0];
    for (i=0;i<n;++i)
    {if (max<arr[i])
    max=arr[i];}
    {min=arr[i];}
    printf("\nmax number is %d",max);
     return 0;  
}  