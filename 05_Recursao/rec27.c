#include <stdio.h>

int h(int, int);

int main() {
    int n, m;

    do {
        printf("n = ");
        scanf("%d", &n);

        printf("m = ");
        scanf("%d", &m);
    } while (n <= 0 || m <= 0);

    printf("%d", h(n, m));
}

int h(int n, int m) {
    if (n == 1)
        return m+1;
    if (m == 1)
        return n+1;
    return h(m, n-1) + h(m-1, n);
}