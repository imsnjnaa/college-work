#include <stdio.h>
int main(){
    int c; 
    char s;
printf("\nenter if the person is student: ");
scanf("%c", &s);
printf("\nenter price of item: ");
scanf("%d",&c);
if (s=='y')
{if (c>=500){
        c=c/10;
        printf("\nthe discount of 10 is %d", c);}
        else{
        c=c/5;
        printf("\nthe discount of 5 is %d", c);}
}
else {
    if (s=='n'){
    c=c/8;
    printf("\nthe discount of 8 is %d", c);}
    else{
    c=c/2;
    printf("\nthe discount of 2 is %d", c);}
    
    }
    return 0;
}