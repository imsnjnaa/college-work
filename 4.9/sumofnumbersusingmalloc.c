#include<stdio.h>  
#include <stdlib.h>
int main()  
{  
 int i,n,*ptr,sum=0;  
 printf("\nenter number of elements: ");  
 scanf("%d",&n);  
 ptr= (int*)malloc(n* sizeof(int));  
 if(ptr==NULL)  
 {  
     printf("\nmemory does not exist");  
     exit(0);  
 }  
 printf("\nenter elements in pointer variable: ");  
 for(i=0;i<n;i++)  
 {  
       scanf("%d",ptr+i);
       sum+= *(ptr+i);
 }  
 printf("sum=%d",sum);  
 free(ptr);  
 return 0;  
}  