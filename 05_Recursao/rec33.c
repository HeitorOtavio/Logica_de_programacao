#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define L 100

void inverterVetor(int[], int);
void imprimirElemento(int[], int);

int main() {
    int v[L];

    srand(time(NULL));

    for (int i = 0; i < L; i++) {
        v[i] = rand() % 21;
        imprimirElemento(v, i);
    }
    printf("\nPARA\n\n");

    inverterVetor(v, 0);

    for (int i = 0; i < L; i++) {
        imprimirElemento(v, i);
    }
}

void inverterVetor(int v[], int pos) {
    int aux;
    if (pos != (L/2)-1)
        inverterVetor(v, pos+1);
    aux = v[pos];
    v[pos] = v[L-1-pos];
    v[L-1-pos] = aux;
}

void imprimirElemento(int v[], int pos) {
    if (v[pos] < 10)
        printf("|%d | ", v[pos]);
    else
         printf("|%d| ", v[pos]);
    if (pos % 9 == 0 && pos != 0)
        printf("\n");
}