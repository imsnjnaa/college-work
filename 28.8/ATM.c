#include <stdio.h>
int main(){
    int a,b,res,ch;
    printf("\nenter any two values: ");
    scanf("%d%d", &a, &b);
    printf("\n1. addition");
    printf("\n2. subtraction");
    printf("\n3. multiplication");
    printf("\n4. division");
    printf("\n0. exit");
    printf("\nenter any choice: ");
    scanf("%d", &ch);
    switch(ch){
        case 1: res=a+b;
                printf("\naddition is %d", res);
                break;
        case 2: res=a-b;
                printf("\nsubtraction is %d", res);
                break;
        case 3: res=a*b;
                printf("\nmultiplication is %d", res);
                break;
        case 4: res=a/b;
                printf("\ndivision is %d", res);
                break;  
        case 0: exit(0);
    }
return 0;
}