#include <stdio.h>
int main()
{
    int n;
    printf("\nenter any number: ");
    scanf("%d", &n);
    if (n>0)
    printf("\npositive integer");
    if (n<0)
    printf("\nnegative integer");
    if (n==0)
    printf("\ninteger is zero");
    return 0;
}