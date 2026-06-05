#include <stdio.h>

int p(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n < 0);

    printf("%d", p(n));
}

int p(int num) {
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    return 2 * p(num - 1) + p(num - 2);
}