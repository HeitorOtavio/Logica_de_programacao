#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main() {
    SetConsoleOutputCP(65001);

    int temps[365], maior, menor, contMenorQueMedia = 0;
    float media = 0;

    srand(time(NULL));

    for (int j = 0; j < 2; j++) {
        for (int i = 0; i < 365; i++) {
            if (j == 0) {
                // Intervalo de temperatura entre -10ºC e 40ºC
                temps[i] = rand() % 51 - 10;
                media += temps[i];

                // Valores iniciais para temp. maior e menor.
                if (i == 0) {
                    maior = temps[i];
                    menor = temps[i];
                } else {
                    if (temps[i] > maior)
                        maior = temps[i];
                    if (temps[i] < menor)
                        menor = temps[i];
                }   
            } else {

                if (i == 0)
                    media /= 365;

                if (temps[i] < media)
                    contMenorQueMedia++;

            }
        }
    }

    printf("Maior temperatura: %dºC;\nMenor temperatura: %dºC;\nTemperatura média anual: %.2fºC;\nNúm. de dias com temp. mais baixa: %d.", maior, menor, media, contMenorQueMedia);
}