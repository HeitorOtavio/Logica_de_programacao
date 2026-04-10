#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float comprimento, largura, altura;

    printf("Largura da cozinha (em metros): ");
    scanf("%f",&largura);
    printf("Comprimento da cozinha (em metros): ");
    scanf("%f",&comprimento);
    printf("Altura da cozinha (em metros): ");
    scanf("%f",&altura);

    if (altura > 0 && comprimento > 0 && largura > 0) {
        printf("Para colocar azulejos de 1,5m² nas paredes da sua cozinha, você precisará de %.2f azulejo(s).",(comprimento*altura)/1.5+(largura*altura)/1.5);
    } else {
        printf("ERRO: Valor(es) inválido(s).");
    }
}