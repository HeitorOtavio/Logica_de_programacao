#include <stdio.h>

int somaCubos(int);

int main() {
    int n;

    printf("n = ");
    scanf("%d", &n);

    printf("%d", somaCubos(n));
}

int somaCubos(int n) {
    if (n == 1)
        return 1;
    if (n == 0)
        return 0;
    return n*n*n + somaCubos(n - 1);
}