#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int N = 0;

    srand(time(NULL));
    
    printf("Tamanho dos vetores: ");
    scanf("%d", &N);

    int A[N], B[N], Soma[N];

    for (int i = 0; i < N; i++) {
        A[i] = rand() % 11;
        B[i] = rand() % 11;
        Soma[i] = A[i] + B[i];

        if (i == 0)
            printf("Soma[%d] = {%d, ", N, Soma[0]);
        else
            if (i != N-1)
                printf("%d, ", Soma[i]);
            else
                printf("%d}", Soma[N-1]);
    }
}