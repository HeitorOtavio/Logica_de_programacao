#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(65001);
    srand(time(NULL));

    int VET[50], posNum[50], qtdReps=0;

    for (int i = 0; i < 50; i++) {
        VET[i] = rand() % 51;
        switch (i) {
            case 0:
                printf("Vetor gerado:\n");
                printf("%d ", VET[0]);
            break;
            default:
                if (i % 5 == 0)
                    printf("\n");
                printf("%d ", VET[i]);
            break;
        }
    }

    printf("\n\n");

    for (int i = 0; i < 50; i++) {
        for (int j = 0; j < 50; j++) {
            if (VET[i] == VET[j]) {
                qtdReps++;
                // Guarda a posição do número
                posNum[qtdReps-1]=j;
            }
        }

        if (qtdReps > 1) {
            printf("%d aparece %d vez(es).\nPosições: ", VET[i], qtdReps);
            for (int k = 0; k < qtdReps; k++) {
                if (k < qtdReps - 2)
                    printf("%d, ", posNum[k]);
                else
                    if (k < qtdReps - 1)
                        printf("%d e ", posNum[k]);
                    else
                        printf("%d.", posNum[k]);
            }
            printf("\n");
        }

        qtdReps=0;
    }
}