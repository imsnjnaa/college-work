#include <stdio.h>

int main()
{
    int n,arr[100],key,i,flag=0,loc=0;
    printf("\n enter any number");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d,arr[i]");
    }
    printf("\n enter the key values")
    scanf("%d",&key);
    for(i=0;i<n;++i)
    { 
        if (arr[i]==key)
        {
            flag=1;
            loc=i;
            break;
        }
}  
if (flag=1)
printf("\n true");
else
printf("\n false");
return 0;
}