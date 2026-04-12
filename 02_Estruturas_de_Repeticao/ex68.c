#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int nMerc = 0;
    float valorPorMerc = 0;

    while (nMerc <= 0 && valorPorMerc <= 0) {
        printf("Total de mercadorias: ");
        scanf("%d", &nMerc);
        printf("Valor de cada mercadoria: ");
        scanf("%f", &valorPorMerc);
    }

    float valorTotal = nMerc * valorPorMerc;
    printf("O valor total das mercadoriais é de R$%.2f;\n", valorTotal);
    printf("A média de valor das mercadorias é de R$%.2f.", valorTotal / valorPorMerc);
}