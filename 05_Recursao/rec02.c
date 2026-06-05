#include <stdio.h>

int fatorial(int);

int main() {
    int N;

    printf("N = ");
    scanf("%d", &N);

    printf("%d", fatorial(N));
}

int fatorial(int N) {
    if (N == 1)
        return 1;
    if (N == 0)
        return 1;
    
    return N * fatorial(N - 1);
}