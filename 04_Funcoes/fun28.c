#include <stdio.h>

void seqFibonacci(int);

int main() {
    int p;

    // Posição de um número dentro da série
    printf("Pos = ");
    scanf("%d", &p);

    seqFibonacci(p);
}

void seqFibonacci(int p) {
    if (p < 2) {
        if (p == 0) {
            printf("F: 0");
        } else {
            printf("F: 0 1");
        }
    } else {
        // F(n-2), F(n-1), F(n) e posição atual
        int ant2=0, ant1=1, atual, posAtual=2;

        printf("F: %d %d", ant2, ant1);
        while (posAtual <= p) {
            atual = ant1 + ant2;
            printf(" %d", atual);
            // Preparação para a próxima repetição
            ant2 = ant1;
            ant1 = atual;
            posAtual++;
        }
    }
}