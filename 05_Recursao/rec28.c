#include <stdio.h>

int A(int, int);

int main() {
    int m, n;

    do {
        printf("m = ");
        scanf("%d", &m);
        printf("n = ");
        scanf("%d", &n);
    } while (n < 0 || m < 0);

    printf("%d", A(m, n));
}

int A(int m, int n) {
    if (m == 0)
        return n + 1;
    if (m > 0 && n == 0)
        return A(m-1, 1);
    return A(m-1, A(m, n-1));
}