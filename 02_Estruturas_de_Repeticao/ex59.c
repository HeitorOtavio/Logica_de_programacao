#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int vInicial, contNeg = 0;

    printf("Valor inicial: ");
    scanf("%d", &vInicial);

    for (int i = 0; i < 10; i++) {
        if (vInicial < 0)
            contNeg++;
        vInicial++;
    }

    printf("Há %d números negativos.", contNeg);
}