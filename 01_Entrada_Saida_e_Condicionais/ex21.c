#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float comprimento_da_pista, consumo_de_combustivel;
    int total_de_voltas, qtd_desejada_de_reabastecimentos;

    printf("Comprimento da pista (em metros): ");
    scanf("%f",&comprimento_da_pista);
    printf("Total de voltas: ");
    scanf("%f",&total_de_voltas);
    printf("Consumo de combustível (Km/L): ");
    scanf("%f",&consumo_de_combustivel);
    printf("Quantidade de reabastecimentos: ");
    scanf("%f",&qtd_desejada_de_reabastecimentos);

    if ((comprimento_da_pista > 0) && (consumo_de_combustivel > 0) && (total_de_voltas > 0) && (qtd_desejada_de_reabastecimentos > 0)) {
        printf("O número mínimo de litros até o primeiro reabastecimento é de %.2fL.", (comprimento_da_pista*total_de_voltas/consumo_de_combustivel)/qtd_desejada_de_reabastecimentos);
    } else {
        if (comprimento_da_pista <= 0) {
            printf("ERRO: Comprimento da pista menor ou igual a 0.\n");
        }
        if (consumo_de_combustivel <= 0) {
            printf("ERRO: Consumo de combustível menor ou igual a 0.\n");
        }
        if (total_de_voltas <= 0) {
            printf("ERRO: Total de voltas menor ou igual a 0.\n");
        }
        if (qtd_desejada_de_reabastecimentos <= 0) {
            printf("ERRO: Quantidade de reabastecimentos menor ou igual a 0.\n");
        }
    }
}