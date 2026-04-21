#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(65001);

    int vetor[30], num, cont=0;

    srand(time(NULL));

    for (int i = 0; i < 30; i++) {
        vetor[i] = rand() % 51;
    }

    do {
        printf("Indique um número do intervalo [0,50]: ");
        scanf("%d", &num);
    } while (num < 0 || num > 50);

    for (int i = 0; i < 30; i++) {
        if (vetor[i] == num)
            cont++;
    }

    printf("O número apareceu %d vez(es).", cont);
}