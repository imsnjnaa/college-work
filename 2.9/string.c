#include<stdio.h>  
int main()  
{  
    char name[10], ch;  
    int i=0;  
    printf("\nenter name: ");  
    while(i<10)   {  
        ch = getchar();  
        name[i] = ch;  
        i++;  
    }  
    name[i] = '\0';         
    printf("\nname: %s", name);  
    return 0;   
}  
