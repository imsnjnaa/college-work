#include <stdio.h>  
#include <string.h>
int main(){
    char name[10], len;  
    printf("\nenter any name: ");
    scanf("%s",name);
    len=strlen(name);
    printf("\nlength of string is %d",len);
    return 0;   
}  
