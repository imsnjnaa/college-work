#include <stdio.h>  
int main(){
    char str[10],oldchar,newchar;
    int i;
    i=0;
    printf("\nenter any string: ");
    scanf("%s",str);
    fflush(stdin);
    getchar();
    printf("\nenter old character: ");
    scanf("%c",&oldchar);
    printf("\nenter new character: ");
    scanf("%c",&newchar);    
    while (str[i]!='\0'){
        if (str[i]=oldchar)
           {str[i]=newchar;}
    ++i;}
    printf("\nreplaced string is %s",str);
    return 0;
}