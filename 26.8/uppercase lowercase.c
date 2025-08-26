#include <stdio.h>
int main()
{
   char ch;
   printf("enter an upper case character: ");
   scanf("%c", &ch);
   ch = ch ^ 32; 
   printf("toggled lower case character: &c\n", ch);
   fflush(stdin); 
   printf("enter a lower case character: ");
   scanf("%c", &ch);
   ch = ch ^ 32;
   printf("toggled upeer case character: %c\n", ch);
   return 0;
}