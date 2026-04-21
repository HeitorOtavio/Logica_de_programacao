#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(65001);
    int notas[20], contAcimaDaMedia = 0;
    float media = 0;

    srand(time(NULL));

    for (int i = 0; i < 20; i++) {
        // Se fosse rand() % 10, devolveria zero ao dividir o múltiplo de 10.
        notas[i] = rand() % 11;

        // Para a impressão das notas
        printf("N%d: %d", i, notas[i]);
        if (i % 5 == 0 && i != 0) {
            printf(";\n");
        } else {
            if (i == 19) {
                printf(".");
            } else {
                printf("; ");
            }
        }

        // "media" como variável acumuladora
        media += notas[i];
    }

    // Divisão do total do acumulador
    media /= 20;

    printf("\nA média da turma é de %.2f;", media);

    for (int i = 0; i < 20; i++) {
        if (notas[i] > media) {
            contAcimaDaMedia++;
        }
    }

    printf("\nHá %d nota(s) acima da média.", contAcimaDaMedia);
}