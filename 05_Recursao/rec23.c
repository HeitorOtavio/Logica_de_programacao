#include <stdio.h>

int somaElem(int[], int);

int main() {
    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("%d", somaElem(v, 4));
}

int somaElem(int vetor[], int aux) {
    if (aux == 0)
        return vetor[0];
    return vetor[aux] + somaElem(vetor, aux-1);
}