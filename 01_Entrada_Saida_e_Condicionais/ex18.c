#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float potencia_utilizada, comprimento, largura;

    printf("Valor de potência de cada lâmpada (em watts): ");
    scanf("%f",&potencia_utilizada);
    printf("Largura do cômodo (em metros): ");
    scanf("%f",&largura);
    printf("Comprimento do cômodo (em metros): ");
    scanf("%f",&comprimento);

    if (potencia_utilizada > 0 && comprimento > 0 && largura > 0) {
        printf("Para iluminar o cômodo com essas lâmpadas, você precisará de %.2f lâmpada(s).", (comprimento*largura)/18*potencia_utilizada);
    } else {
        printf("ERRO: Valor(es) inválido(s).");
    }
}