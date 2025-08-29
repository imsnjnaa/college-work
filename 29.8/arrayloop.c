#include <stdio.h>
int main()  
{  
    int arr[5],i;  
    for(i=0;i<5;i++)  
    {printf("\nenter a value of array arr[%d]:",i);  
        scanf("%d",&arr[i]);}  
    printf(" array elements are: ");  
    for(i=0;i<5;i++)  
    {printf("%d\t", arr[i]);}  
     return 0;  
}  