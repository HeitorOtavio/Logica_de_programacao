#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    
    int n_lados;
    float lado;

    printf("Número de lados do polígono: ");
    scanf("%d",&n_lados);

    if (n_lados > 0)
        if ((n_lados >= 3) && (n_lados <= 5))
            if (n_lados == 5)
                printf("PENTÁGONO.");
            else {                
                printf("Valor de um lado do polígono (em cm): ");
                if (lado > 0) {
                    scanf("%f",&lado);
                    if (n_lados == 4)
                        printf("QUADRADO. Sua área é de %.2fcm².",lado*lado);
                    else
                        printf("TRIÂNGULO. Seu perímetro é de %.2fcm.", lado*n_lados);
                } else {
                    printf("ERRO: Lado inválido.");
                }
            }
        else
            if (n_lados < 3)
                printf("ERRO: Não é um polígono.");
            else
                printf("ERRO: Polígono não identificado.");
    else
        printf("ERRO: Valor inválido.");
}