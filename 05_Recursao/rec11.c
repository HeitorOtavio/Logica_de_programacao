#include <stdio.h>

void mostrarVetor(int[], int);

int main() {
    int v[5];

    for (int i = 0; i < 5; i++) {
        printf("v[%d] = ", i);
        scanf("%d", &v[i]);
    }

    mostrarVetor(v, 0);
}

void mostrarVetor(int vet[], int aux) {
    if (aux == 4) {
        printf("%d", vet[4]);
    } else {
        printf("%d ", vet[aux]);
        mostrarVetor(vet, aux + 1);
    }
}