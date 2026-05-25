// Inacabado
#include <stdio.h>

// Máximo de Tamanho da String
#define mts 40

int ehPalindromo(char[mts], int);

int main() {
    char str1[mts], str2[mts];
    int tam, menos;

    printf("S: ");
    fgets(str1, sizeof(str1), stdin);
    tam = strlen(str1);
    str1[tam-1] = '\0';

    menos = 0;

    // Remoção de espaços em branco
    for (int i = 0; i < tam; i++) {
        if (str1[i-menos] == ' ') {
            menos++;
        }
        str2[i-menos] = str1[i+menos];
    }

    // Atualização do tamanho da string
    tam = strlen(str2);
    printf("%s ->\n%s", str1, str2);

    printf("R: %d", ehPalindromo(str2, tam));
}

int ehPalindromo(char str[mts], int tam) {
    char invStr[mts];
    for (int i = 0; i < (tam-1); i++) {
        invStr[i] = str[tam-1-i];
        if (!(invStr[i] == str[i]))
            return 0;
    }
    return 1;
}