#include <stdio.h>
int main()  
{  
    int arr[100],i,even=0,odd=0,n;  
    printf("\nenter size of array: ");  
        scanf("%d",&n);  
    printf("\nenter array elements: ");
    for (i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    for (i=0;i<n;i++)
    if (arr[i]%2==0)
    {even++;}
    else
    {odd++;}
    printf("\nodd number is %d",odd);
    printf("\neven number is %d",even);
    return 0;  
}  