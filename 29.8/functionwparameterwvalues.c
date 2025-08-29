#include<stdio.h>
int add(int, int);
int main(){
    int x,y,res1;
    printf("\n enter any two values: ");
    scanf("%d%d",&x,&y);
    res1=add(x,y);
    printf("\n the result of addition is %d",res1);
    return 0;
}
int add(int x,int y){
    int res=x+y;
    return res;
    }