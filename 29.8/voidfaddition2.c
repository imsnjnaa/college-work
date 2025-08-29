#include<stdio.h>
void add(int, int);
int main(){
    int x,y,res;
    printf("\n enter any two values: ");
    scanf("%d%d",&x,&y);
    add(x,y);
    return 0;
}
void add(int x,int y){
    int res=x+y;
    printf("\n the result of addition is %d",res);
    }