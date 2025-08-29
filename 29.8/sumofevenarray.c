#include <stdio.h>
int main()  
{  
    int arr[100],i,sum=0,n;  
    printf("\nenter size of array: ");  
        scanf("%d",&n);  
    printf("\nenter array elements: ");
    for (i=0;i<n;++i)
    {scanf("%d",&arr[i]);}
    for (i=0;i<n;++i)
    {if (arr[i]%2==0)
    {sum=sum+arr[i];}}
    printf("\nsum of even array elements is %d",sum);
     return 0;  
}  