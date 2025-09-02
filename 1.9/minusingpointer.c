#include <stdio.h>

int main()
{
    int n,arr[100],key,i,j,temp,*ptr;
    printf("\nenter size: ");
    scanf("%d",&n);
    ptr=arr;
    printf("\nenter array elements: ");
    for(i=0;i<n;i++)
    {scanf("%d",&arr[i]);}
    for (i=0;i<n-1;++i)
    {for (j=0;j<n-i-1;j++)
    {if ((ptr+j)>arr[ptr+j+1])
    {temp=*[ptr+j];
    *[ptr+j]=*[j+1];
    *arr[j+1]=temp;}}}
 printf("\n");
 for (i=0;i<n;++i)
 {printf("%d\t",arr[i]); }
return 0;
}