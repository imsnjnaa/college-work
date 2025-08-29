#include <stdio.h>
create add(),sub(),mul(),div();
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
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
        case 1: res=add(a,b);
                printf("\naddition is %d", res);
                break;
        case 2: res=sub(a,b);
                printf("\nsubtraction is %d", res);
                break;
        case 3: res=mul(a,b);
                printf("\nmultiplication is %d", res);
                break;
        case 4: res=div(a,b);
                printf("\ndivision is %d", res);
                break;  
        case 0: exit(0);
    }
return 0;
}
int add(int a,int b)
{res=a+b;
return res;}
int sub(int a, int b)
{res=a-b;
return res;}
int mul(int a, int b)
{res=a*b;
return res;}
int div(int a, int b)
{res=a/b;
return res;}
