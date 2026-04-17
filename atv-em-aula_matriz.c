#include <stdio.h>

int main() {
    int mat[3][4], sumLin[3], total = 0;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("[%d][%d] = ", i, j);
            scanf("%d",&mat[i][j]);
            sumLin[i] += mat[i][j]; 
        }
    }

    printf("\nMatriz gerada: \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }

    printf("Vetor sumLin: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", sumLin[i]);
        total += sumLin[i];
    }

    printf("\nSoma dos elementos: %d", total);
}
