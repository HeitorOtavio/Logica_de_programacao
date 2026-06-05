#include <stdio.h>

int tetranacci(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n < 0);

    printf("%d", tetranacci(n));
}

int tetranacci(int num) {
    if (num < 3)
        return 0;
    if (num == 3)
        return 1;
    return tetranacci(num-1) + tetranacci(num-2) + tetranacci(num-3) + tetranacci(num-4);
}