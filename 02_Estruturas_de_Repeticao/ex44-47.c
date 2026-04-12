#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float n1, n2;

    printf("N1: ");
    scanf("%f",&n1);
    printf("N2: ");
    scanf("%f",&n2);

    while (n2 == 0) {
        printf("VALOR INVÁLIDO\n");
        printf("N2: ");
        scanf("%f",&n2);
    }

    printf("O quociente dessa divisão é %.2f",n1/n2);
}