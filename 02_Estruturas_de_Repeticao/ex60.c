#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int vInicial, contDentro = 0, contFora = 0;

    printf("Valor inicial: ");
    scanf("%d", &vInicial);

    for (int i = 0; i < 10; i++) {
        if (vInicial >= 10 && vInicial <= 20)
            contDentro++;
        else
            contFora++;
        vInicial++;
    }

    printf("Tem %d números no intervalo e %d fora dele.", contDentro, contFora);
}