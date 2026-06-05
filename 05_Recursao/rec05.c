#include <stdio.h>

int seqFibonacci(int);

int main() {
    int N;

    printf("Pos: ");
    scanf("%d", &N);

    printf("%d", seqFibonacci(N));
}

int seqFibonacci(int N) {
    if (N == 1)
        return 0;
    if (N == 2)
        return 1;
    return seqFibonacci(N - 2) + seqFibonacci(N - 1);
}