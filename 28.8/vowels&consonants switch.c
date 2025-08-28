#include <stdio.h>
int main(){
   char c;
   printf("\nenter any character: ");
   scanf("%c", &c);
   switch(c){
    case 'a': printf("\n %c is vowel", c);
                 break;
    case 'e': printf("\n %c is vowel", c);
                 break;
    case 'i': printf("\n %c is vowel", c);
                 break;
    case 'o': printf("\n %c is vowel", c);
                 break;
    case 'u': printf("\n %c is vowel", c);
                 break;
    default: printf("\n %c is consonant", c);
    
   }
    return 0;
}