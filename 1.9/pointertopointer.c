#include <stdio.h>
int main(){
   int arr[5]={5,10,15,20,25,30},i=0;
   for (i=0;i<5,i++)
   {printf("\nvalue of a[%d]", i);
    printf("\n%d", arr[i]);
    printf("\n%d", i[arr]);
    printf("\n%d", *(arr+i));
    printf("\n%d", *(i+arr));
}
return 0;
}