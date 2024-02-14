#include <stdio.h>

int main(){

    int a = 10, b = 15;
    int *x = &a, *y = &b;
    
    printf("%d\n", *x);
    printf("%d\n", x);
    printf("Hex: %x\n", x);
    printf("%d\n", *y);
    printf("%d\n", y);
    printf("Hex: %x\n", y);
    printf("%d\n", *x + *y);
    return 0;
}