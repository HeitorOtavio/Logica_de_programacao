#include <stdio.h>

int fibg(int, int, int);

int main() {
    int f0, f1, n;

    do {
        printf("Defina f0, f1 e n respectivamente:\n");
        scanf("%d", &f0);
        scanf("%d", &f1);
        scanf("%d", &n);
    } while (f0 < 0 || f1 < 0 || n < 0);

    printf("%d", fibg(f0, f1, n));
}

int fibg(int f0, int f1, int n) {
    if (n == 0)
        return f0;
    if (n == 1)
        return f1;
    return fibg(f0, f1, n-1) + fibg(f0, f1, n-2);
}