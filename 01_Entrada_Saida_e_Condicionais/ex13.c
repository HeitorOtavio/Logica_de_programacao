#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float fabrica;

    do {
        printf("Valor de fábrica do carro: ");
        scanf(" %f",&fabrica);
    } while (fabrica < 0);

    printf("O valor real do seu carro é de R$%.2f.", fabrica + fabrica*0.28 + fabrica*0.45);
}