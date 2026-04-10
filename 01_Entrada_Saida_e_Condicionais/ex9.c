#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float lado, area;
    printf("Envie o lado da área do quadrado: ");
    scanf("%f",&lado);

    if (lado >= 0) {
        area = lado * lado;
        printf("A área do quadrado é de, com aproximação de duas casas decimais, %.2fu² e seu dobro é de %.2fu²",area,area*2);
    } else {
        printf("ERRO: Lado de quadrado inválido.");
    }
}