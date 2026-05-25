#include <stdio.h>

int fat(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n < 0);

    printf("%d! = %d", n, fat(n));
}

int fat(int n) {
    int s = 1;
    for (int i = 0; i < n; i++)
        s *= n - i;
    return s;
}