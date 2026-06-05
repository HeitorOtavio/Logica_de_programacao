#include <stdio.h>

int menorElemento(int[], int, int);

int main() {
    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    printf("%d", menorElemento(v, 0, v[0]));
}

int menorElemento(int vet[], int aux, int maior) {
    if (vet[aux] < maior)
        maior = vet[aux];
    if (aux < 4)
        return menorElemento(vet, aux + 1, maior);
    return maior;
}

