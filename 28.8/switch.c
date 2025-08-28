#include <stdio.h>
int main(){
    int n;
    printf("\nenter any number: ");
    scanf("%d", &n);
    switch (n){
    case 1: printf("\none");
            break; //optional else all statements are printed
    case 2: printf("\ntwo");
            break;
    case 3: printf("\nthree");
            break;
    default: printf("\ninvalid input");
            break;
}
return 0;
}