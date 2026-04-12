#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int numIni, soma = 0;

    printf("Valor inicial: ");
    scanf("%d",&numIni);

    for (int i = 0; i < 10; i++) {
        if (numIni < 40)
            soma += numIni;
        numIni++;
    }

    printf("A soma dos números menores do que 40 do intervalo [%d,%d) é: %d", numIni-10, numIni, soma);
}