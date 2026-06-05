#include <stdio.h>

void ordParCresc(int, int);

int main() {
    int N;
    
    do {
        printf("N = ");
        scanf("%d", &N);
    } while (N % 2 == 1);

    ordParCresc(N, 0);
}

void ordParCresc(int n, int aux) {
    if (aux == n) {
        printf("%d", n);
    } else {
        printf("%d ", aux);
        ordParCresc(n, aux+2);
    }
}