#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int soma = 0, numIni;

    printf("Valor inicial: ");
    scanf("%d",&numIni);

    for (int i = 0; i < 10; i++) {
        soma += numIni;
        numIni++;
    }

    printf("A soma dos números do intervalo [%d,%d) é de: %d.", numIni-10, numIni, soma);
}