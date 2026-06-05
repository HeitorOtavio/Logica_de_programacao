#include <stdio.h>

void ordCresc(int, int);

int main() {
    int N;

    printf("N = ");
    scanf("%d", &N);

    ordCresc(N, 0);
}

void ordCresc(int N, int aux) {
    if (aux == N) {
        printf("%d", N);
    } else {
        printf("%d, ", aux);
        ordCresc(N, aux+1);
    }
}