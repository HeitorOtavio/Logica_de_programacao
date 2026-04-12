#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int min, max, soma = 0;

    printf("Valor INICIAL: ");
    scanf("%d",&min);

    do {
        printf("Valor FINAL: ");
        scanf("%d",&max);
    } while (max <= min);

    for (min; min <= max; min++) {
        printf("%d\n",min);
        soma += min;
    }

    printf("A soma dos números é de: %d.", soma);
}