#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {

    int A[10], X, M[10];

    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        A[i] = rand() % 16; 
    }

    X = rand() % 11;

    for (int j = 0; j < 10; j++) {
        M[j] = A[j] * X;
        switch (j) {
            case 0:
                printf("M: {%d, ", M[0]);
                break;
            case 9:
                printf("%d}", M[9]);
                break;
            default:
                printf("%d, ", M[j]);
                break;
        }
    }
}