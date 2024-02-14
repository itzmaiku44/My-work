#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter value of n1: ");
    scanf("%d", &n1);
    printf("Enter value of n2: ");
    scanf("%d", &n2);

    if (n1 % 2 != 0) {
        n1++;
    }

    while (n2 >= n1) {
        if (n2 % 2 == 0) {
            printf("%d ", n2);
        }
        n2 -= 2;
    }
    return 0;
}
