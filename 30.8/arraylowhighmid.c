#include <stdio.h>

int main()
{
    int n,arr[100],key,i,flag=0,low=0, high,mid;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&key);
    high=n-1;
    mid=(low+high)/2;
    while(low<=high && flag==0){
    mid=(low+high)/2; 
        if (key==arr[mid])
            flag=1;
   else if (key<arr[mid])
   high=mid-1;
   else
   low=mid+1;
    }
if (flag==1)
 printf("\nTrue");
 else
printf("\nFalse ");
return 0;
}