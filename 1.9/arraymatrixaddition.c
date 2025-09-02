#include <stdio.h>
int main(){
    int i,j,arr3[3][3];
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
    {arr3[i][j]=arr1[i][j]+arr2[i][j];}}
    printf("\nmatrix addition \n");
    for (i=0;i<3;++i)
    {for (j=0;j<3;++j)
        {printf("%d\t", arr3[i][j]);}
        printf("\n");
    }
    return 0;
}