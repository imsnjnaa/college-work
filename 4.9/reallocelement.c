#include<stdio.h>  
#include <stdlib.h>
int main()  
{  
 int i,n1,n2,*ptr,sum=0;  
 printf("\nenter number of elements: ");  
 scanf("%d",&n1); 
 ptr=(int*)malloc(n1*sizeof(int));
 printf("\nenter elements in pointer variable: ");
 for (i=0;i<n1;i++)
 scanf("%d",&ptr[i]);
 for (i=0;i<n1;i++)
 printf("\n%d",ptr[i]);
 printf("\nenter number of elements");
 scanf("%d",&n2);
 ptr=realloc(ptr,n2*sizeof(int));
 printf("\nenter elements in pointer variables: ");
 for (i=0;i<n2;i++)
 scanf("%d",&ptr[i]);
 for (i=0;i<n2;i++)
 printf("\n%d",ptr[i]);
 free(ptr);
 return 0;  
}  