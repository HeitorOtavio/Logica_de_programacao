#include <stdio.h>

void invNum(int[]);

int main() {
    int num[6];

    for (int i = 0; i < 6; i++) {
        printf("num[%d] = ", i);
        do {
            scanf("%d", &num[i]);
        } while (num[i] < 0 || num[i] > 9);
    }

    invNum(num);

    printf("Invertido: ");
    for (int i = 0; i < 6; i++) {
        printf("%d", num[i]);
    }
}

void invNum(int vet[]) {
    int aux;
    for (int i = 0; i < 3; i++) {
        aux = vet[i];
        vet[i] = vet[5-i];
        vet[5-i] = aux;
    }
}