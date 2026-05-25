#include <stdio.h>
#include <string.h>

void paraBin(int*, char[]);
void ajustBin(char[], int);

int main() {
    int x;
    char bin[20];

    printf("X: ");
    scanf("%d", &x);

    paraBin(&x, bin);
    printf("Bin: %s", bin);
}

void paraBin(int *num, char bin[]) {
    int cont = 0;
    while (*num > 0) {
        if (*num % 2)
            bin[cont] = '1';
        else
            bin[cont] = '0';
        *num /= 2;
        cont++;
    }
    bin[cont] = '\0';
    ajustBin(bin, cont);
}

void ajustBin(char bin[], int tam) {
    char aux;
    for (int i = 0; i < (tam-1) / 2; i++) {
        aux = bin[i];
        bin[i] = bin[tam-1-i];
        bin[tam-1-i] = aux;
    }
}