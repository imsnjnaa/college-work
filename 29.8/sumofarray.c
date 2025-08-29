#include <stdio.h>
int main()  
{  
    int arr[5],i,sum=0;  
    {printf("\nenter a value of array arr[%d]:",i);  
        scanf("%d",&arr[i]);}  
    for(i=0;i<5;i++)  
    {scanf("%d",&arr[i]);}
    for(i=0;i<5;i++) 
    {sum=sum+arr[i];}
    printf("sum of array elements is: %d",sum);  
     return 0;  
}  