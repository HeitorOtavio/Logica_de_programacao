#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int inicial, final, soma = 0;

    printf("Valor INICIAL: ");
    scanf("%d",&inicial);
    printf("Valor FINAL: ");
    scanf("%d",&final);
    
    if (inicial <= final)
        for (inicial; inicial <= final; inicial++) {
            soma += inicial;
        }
    else
        for (inicial; inicial >= final; inicial--) {
            soma += inicial;
        }

    printf("A soma dos valores é de: %d.", soma);
}