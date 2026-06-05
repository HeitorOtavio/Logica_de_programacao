#include <stdio.h>

int fatDuplo(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n % 2 == 0 || n <= 0);

    printf("%d", fatDuplo(n));
}

int fatDuplo(int num) {
    if (num == 1)
        return 1;
    return num * fatDuplo(num - 2);
}