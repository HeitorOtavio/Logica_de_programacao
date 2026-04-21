#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int vetor[20];

    srand(time(NULL));
    
    for (int i = 0; i < 20; i++) {
        vetor[i] = rand() % 11;
        switch (i) {
            case 0:
                printf("Gerado: {%d, ", vetor[0]);
                break;
            case 19:
                printf("%d};\n", vetor[19]);
                break;
            default:
                printf("%d, ", vetor[i]);
        }
    }

    for (int j = 19; j >= 0; j--) {
        switch (j) {
            case 19:
                printf("Inverso: {%d, ", vetor[19]);
                break;
            case 0:
                printf("%d}.", vetor[0]);
                break;
            default:
                printf("%d, ", vetor[j]);
        }
    }
}