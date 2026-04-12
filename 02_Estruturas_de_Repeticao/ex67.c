#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int soma = 0;

    for (int i = 15; i <= 100; i++) {
        soma += i;
    }

    printf("A soma dos valores no intervalo [15,100] é de: %d.", soma);
}