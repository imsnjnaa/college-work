#include <stdio.h>
int main(){
    int i,j,k,arr3[3][3],sum=0,sum1,cols[3];
    int arr1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    for (i=0;i<3;++i)
    {sum=0;
    sum1=0;
    for (j=0;j<3;j++)
    {sum=sum+arr1[i][j];
    sum1=sum1+arr1[j][i];
    printf("%d\t",arr1[i][j]);}
    printf("\n");
    cols[i]=sum1;}
    for (i=0;i<3;i++)
    {printf("%d\t",cols[i]);}
    return 0;
}