#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int Q[20], maior, posQ = 0;

    srand(time(NULL));

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 20; j++) {
            if (i == 0) {

                Q[j] = rand() % 31;
                if (j == 0) {
                    maior = Q[j];
                } else {
                    if (Q[j] > maior) {
                        maior = Q[j];
                    }
                }

            } else {
                if (Q[j] == maior)
                    break;
                posQ++;
            }
        }
    }

    printf("O maior número do vetor é %d e ele aparece pela primeira vez na posição %d.\n\n", maior, posQ);

    printf("Vetor lido: {");
    for (int i = 0; i < 20; i++) {
        if (i != 19)
            printf("%d, ", Q[i]);
        else
            printf("%d}", Q[i]);
    }
}