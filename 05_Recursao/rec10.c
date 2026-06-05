#include <stdio.h>

void ordParDecresc(int);

int main() {
    int N;

    do {
        printf("N = ");
        scanf("%d", &N);
    } while (N % 2 == 1);

    ordParDecresc(N);
}

void ordParDecresc(int n) {
    if (n == 0) {
        printf("%d", n);
    } else {
        printf("%d ", n);
        ordParDecresc(n - 2);
    }
}