#include <stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int main(){
    int a,b,c,res,ch;
    printf("\nenter any three values: ");
    scanf("%d%d%d", &a, &b, &c);
    printf("\n1. addition");
    printf("\n2. subtraction");
    printf("\n3. multiplication");
    printf("\n4. division");
    printf("\n5. a1");
    printf("\n6. a2");
    printf("\n7. a3");
    printf("\n8. a4");
    printf("\n9. a5");
    printf("\n10.a6");
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
        case 5: res=(a*a)+(2*a*b)+(b*b);
                printf("\nsolution is %d", res);
                break;
        case 6: res=(a*a)-(2*a*b)+(b*b);
                printf("\nsolution is %d", res);
                break;
        case 7: res=(a*a)+(b*b);
                printf("\nsolution is %d", res);
                break;  
        case 8: res=(a*a)-(b*b);
                printf("\nsolution is %d", res);
                break;
        case 9: res=(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a);
                printf("\nsolution is %d", res);
                break;
        case 10:res=(a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b);
                printf("\nsolution is %d", res);
                break;
        case 0: printf("\nexit");
                break;
    }
return 0;
}
int add(int a,int b)
{int res=a+b;
return res;}
int sub(int a, int b)
{int res=a-b;
return res;}
int mul(int a, int b)
{int res=a*b;
return res;}
int div(int a, int b)
{int res=a/b;
return res;}
int a1(int a, int b)
{int res=(a*a)+(2*a*b)+(b*b);
return res;}
int a2(int a, int b)
{int res=(a*a)-(2*a*b)+(b*b);
return res;}
int a3(int a, int b)
{int res=(a*a)+(b*b);
return res;}
int a4(int a, int b)
{int res=(a*a)-(b*b);
return res;}
int a5(int a, int b, int c)
{int res=(a*a)+(b*b)+(c*c)+(2*a*b)+(2*b*c)+(2*c*a);
return res;}
int a6(int a, int b, int c)
{int res=(a*a*a)+(b*b*b)+(3*a*a*b)+(3*a*b*b);
return res;}

