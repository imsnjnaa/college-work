#include <stdio.h>
int main(){
   char c;
   printf("\nenter any character: ");
   scanf("%c", &c);
   if (c=='a'&&'e'&&'i'&&'o'&&'u')
   {printf("\n%c is vowel",c);}
   else
   {printf("\n%c is consonant",c);}
   return 0;
}   