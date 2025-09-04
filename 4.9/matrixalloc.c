#include<stdio.h>  
#include <stdlib.h>
int main()  
{  
 int rows,cols,i,j;
 int **matrix;
 printf("\nenter number of rows: ");
 scanf("%d",&rows);
 printf("\nenter number of columns: ");
 scanf("%d",&cols);
 matrix=(int**)malloc(rows*sizeof(int*));
 for (i=0;i<rows;i++)
 {matrix[i]=(int*)malloc(cols*sizeof(int));}
 printf("\nenter elements of matrix: ");
 for (i=0;i<rows;i++)
 {
     for (j=0;j<cols;j++)
     scanf("%d",&matrix[i][j]);
 }
 printf("matrix:\n");
 for (i=0;i<rows;i++)
 {
     for (j=0;j<cols;j++)
     {
         printf("%d",matrix[i][j]);
     }
         printf("\n");
 }
 free(matrix);
 return 0;  
}  