#include <stdio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>

int main() {
    SetConsoleOutputCP(65001);

    int Q[20], menor, posQ = 0;

    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 20; j++) {

            if (Q[j-1] == menor && i == 1)
                break;

            switch (i) {
                // Reaproveitamento da repetição de "j"
                case 0:
                    Q[j] = rand() % 51;
                    if (j == 0)
                        menor = Q[j];
                    else {
                        if (Q[j] < menor)
                            menor = Q[j];
                    }
                    break;

                case 1:
                    if (Q[j] == menor)
                        break;
                    posQ++;
                    break;

                case 2:
                    switch (j) {
                        case 0:
                            printf("\nVetor lido: {%d, ", Q[0]);
                            break;
                        case 19:
                            printf("%d}", Q[19]);
                            break;
                        default:
                            printf("%d, ", Q[j]);
                            break;
                    }
                    break;

            }

        }
    }

    printf("\n\nO menor número do vetor é %d, aparece pela primeira vez na posição %d.", menor, posQ);
}