#include<stdio.h>
void add();
int main(){
    add();
    return 0;
}
void add(){
    int x,y,res;
    printf("\n enter any two values: ");
    scanf("%d%d",&x,&y);
    res=x+y;
    printf("\n the result of addition is %d",res);
    }