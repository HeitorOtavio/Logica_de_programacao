#include <stdio.h>

int somatorio(int);

int main() {
    int N;

    printf("N = ");
    scanf("%d", &N);

    printf("%d", somatorio(N));
}

int somatorio(int N) {
    if (N == 1)
        return 1;
    if (N == 0)
        return 0;
        
    return N + somatorio(N-1);
}