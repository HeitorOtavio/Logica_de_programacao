#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float km_inicio, km_fim, litros_gastos, dinheiro_recebido;

    printf("==> Insira os valores válidos para poder efetuar o cálculo.\n\n");

    do {
        printf("Km inicial: ");
        scanf("%f",&km_inicio);
        printf("Km final: ");
        scanf("%f",&km_fim);
        printf("Total de litros gastos no dia: ");
        scanf("%f",&litros_gastos);
        printf("Total de dinheiro recebido dos passageiros: ");
        scanf("%f",&dinheiro_recebido);
    } while (km_inicio >= km_fim || litros_gastos <= 0 || dinheiro_recebido <= 0);

    printf("A média de gasto de combustível por quilômetro foi de %.2fKm/L.\n",(km_fim-km_inicio)/litros_gastos);
    printf("Além disso, o lucro do dia foi de R$%.2f.",dinheiro_recebido - (2.9 * litros_gastos));
}