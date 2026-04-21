#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(65001);

    int V1[15], V2[15], contIgual=0;

    srand(time(NULL));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 15; j++) {
            switch (i) {
                case 0:
                    V1[j] = rand() % 21;
                    printf("%d ", V1[j]);
                break;
                case 1:
                    
                    V2[j] = rand() % 21;
                    if (j == 0)
                        printf("\n");
                    printf("%d ", V2[j]);
                break;
                default:
                    if (V1[j] == V2[j])
                        contIgual++;
                break;
            }
        }
    }

    printf("Há %d número(s) iguais nas mesmas posições de V1 e de V2.", contIgual);
}