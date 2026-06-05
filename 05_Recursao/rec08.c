#include <stdio.h>

void ordDecresc(int);

int main() {
    int N;

    printf("N = ");
    scanf("%d", &N);

    ordDecresc(N);
}

void ordDecresc(int n) {
    if (n == 0) {
        printf("%d", 0);
    } else {
        printf("%d ", n);
        ordDecresc(n-1);
    }
}