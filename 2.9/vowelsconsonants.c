#include <stdio.h>
int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, specialsymbol = 0;
    
    printf("enter a string: ");
    gets(str, sizeof(str));
        str[strcspn(str, "\n")] = '\0';
    
    for(int i = 0; str[i]!='\0'; i++) {
        if(str[i] == 'a'|| str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            vowels++;
        }
        else if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            consonants++;
        }
        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }
        else if(str[i] == ' ') {
            specialsymbol++;
        }
        else {
            specialsymbol++;
        }
    printf("\nthe result is: %d",str);    
    return 0;
}