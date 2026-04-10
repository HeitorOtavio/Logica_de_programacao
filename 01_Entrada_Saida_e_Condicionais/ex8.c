#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float metros;

    printf("Insira o valor em metros: ");
    scanf("%f",&metros);

    if (metros > 0) {
        printf("Com a aproximação de duas casas decimais, o valor em centímetros é de %.2fcm.",metros*100);
    } else {
        printf("ERRO: Valor em metro inválido.");
    }
}