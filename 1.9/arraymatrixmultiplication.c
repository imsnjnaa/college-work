#include <stdio.h>
int main(){
    int i,j,k,arr3[3][3],sum=0;
    int arr1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr2[3][3]={
        {2,1,3},
        {6,5,7},
        {2,3,4}
    };
    for (i=0;i<3;++i)
    {for (j=0;j<3;j++)
    {sum=0;
    for (k=0;k<3;k++)
    {sum=sum+arr1[i][k]*arr2[k][j];}
    arr3[i][j]=sum;}}
    printf("\nmatrix multiplication \n");
    for (i=0;i<3;++i)
    {for (j=0;j<3;++j)
        {printf("%d\t", arr3[i][j]);}
        printf("\n");
    }
    return 0;
}