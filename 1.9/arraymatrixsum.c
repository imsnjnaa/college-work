#include <stdio.h>
int main(){
    int arr[3][3],i,j,sum=0;
    printf("\nenter any values: ");
    for (i=0;i<3;++i)
    {{for (j=0;j<3;++j)
    scanf("%d", &arr[i][j]);}}
    for (i=0;i<3;++i)
    {for (j=0;j<3;++j)
    {sum=sum+arr[i][j];
    printf("\nsum of 2D arrays is %d",sum);}}
    return 0;
}