#include <stdio.h>
int main(){
    int sal=100000;
    float f=3.14;
    printf("\naddress of sal is %d", &sal);
    printf("\naddress of sal is %u", &sal);
    printf("\naddress of sal is %p", &sal);
    printf("\naddress of f is %d",  &f);
    printf("\naddress of f is %u",  &f);
    printf("\naddress of f is %p", &f);
    return 0;
}