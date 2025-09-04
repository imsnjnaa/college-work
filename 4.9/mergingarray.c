#include<stdio.h>  
#include <stdlib.h>
int main()  
{  
int n1,n2,i;
int *arr1,*arr2,*merged;
printf("\nenter size of first array: "); scanf("%d",&n1);
printf("\nenter size of second array: "); scanf("%d", &n2);
arr1=(int*)malloc(n1*sizeof(int));
arr2=(int*)malloc(n2*sizeof(int));
printf("\nenter %d elements for the first array: ",n1);
for (i=0;i<n1;i++)
{
    scanf("%d",&arr1[i]);
}
printf("\nenter %d elements for the second array: ",n2);
for (i=0;i<n2;i++)
{
    scanf("%d",&arr2[i]);
}
merged=(int*)malloc((n1+n2)*sizeof(int));
for (i=0;i<n1;i++)
{
    merged[i]=arr1[i];
}
for (i=0;i<n2;i++)
{
    merged[n1+i]=arr2[i];
}
printf("\nmerged array: ");
for (i=0;i<n1;i++)
{
    printf("%d",merged[i]);
}
free(arr1);
free(arr2);
free(merged);
return 0;  
}  