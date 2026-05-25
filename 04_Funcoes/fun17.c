// Obs.: Não consta a regra dos quatro algarismos repetidos (ex.: XXXX -> XL)
// e similares.
#include <stdio.h>
#include <string.h>

void separar(int*, int[]);
void convRomano(int[], char[]);
void limparString(char[]);

int main() {
    int num, v[7] = {0,0,0,0,0,0,0};
    char numRom[20];

    limparString(numRom);

    do {
        printf("Num: ");
        scanf("%d", &num);
    } while (num <= 0);

    separar(&num, v);
    convRomano(v, numRom);

    puts(numRom);
}

void limparString(char str[]) {
    for (int i = 0; i < strlen(str); i++)
        str[i] = ' ';
}
void separar(int *num, int v[]) {
    int ref[7] = {1000, 500, 100, 50, 10, 5, 1};
    for (int i = 0; i < 7; i++) {
        while (*num >= ref[i]) {
            *num -= ref[i];
            v[i]++;
        }   
    }
}

void convRomano(int v[], char numRom[]) {
    char ref[7] = {'M','D','C','L','X','V','I'};
    int cont = 0;
    for (int i = 0; i < 7; i++) {
        while (v[i] > 0) {
            numRom[cont] = ref[i];
            v[i]--;
            cont++;
        }
    }
    numRom[cont] = '\0';
}