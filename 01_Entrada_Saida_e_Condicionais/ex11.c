#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    
    float total, valido, nulo, branco;

    printf("Total de eleitores: ");
    scanf("%f",&total);
    printf("Votos válidos: ");
    scanf("%f",&valido);
    printf("Votos anulados: ");
    scanf("%f",&nulo);
    printf("Votos em branco: ");
    scanf("%f",&branco);

    if (total > 0) {
        if (total == valido + nulo + branco) {
            valido = (valido / total) * 100;
            nulo = (nulo / total) * 100;
            branco = (branco / total) * 100;
            printf("Resultados da eleição (em porcentagem, com uma casa decimal):\nVotos válidos: %.1f;\nVotos nulos: %.1f;\nVotos em branco: %.1f.",valido,nulo,branco);
        } else {
            printf("ERRO: Soma dos votos é diferente do total de eleitores.");
        }
    } else {
        printf("ERRO: Não há eleitores.");
    }
}