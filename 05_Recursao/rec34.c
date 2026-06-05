// Não está funcionando
#include <stdio.h>
#include <stdio.h>

#define MAX_CASAS_DECIMAIS 6

int pot10(int);
void zerarVetorInt(int[], int);
void vetorizarNum(int*, int[], int*);
int inverterNum(int[], int, int*);

int main() {
    int n, v[MAX_CASAS_DECIMAIS], nCasas=1;

    zerarVetorInt(v, MAX_CASAS_DECIMAIS);

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n >= pot10(MAX_CASAS_DECIMAIS));

    printf("n inicial: %d\n", n);

    vetorizarNum(&n, v, &nCasas);

    printf("n final: %d", inverterNum(v, nCasas, &n));
}

int pot10(int num) {
    int t = 1;
    for (int i = 0; i < num; i++)
        t *= 10;
    return t;
}

void zerarVetorInt(int vet[], int num) {
    for (int i = 0; i < num; i++) {
        vet[i] = 0;
    }
}

void vetorizarNum(int *num, int vet[], int *nCasas) {
    int aux, contou=0;
    if (*num < 10)
        vet[MAX_CASAS_DECIMAIS-1] = *num;
    else {
        for (int i = 0; i < MAX_CASAS_DECIMAIS; i++) {
            aux = pot10(MAX_CASAS_DECIMAIS-1-i);
            if (*num >= aux && (!contou)) {
                *nCasas = i;
                contou = 1;
            }
            while (*num >= aux) {
                *num -= aux;
                vet[i]++; 
            }
        }
    }
}

int inverterNum(int vet[], int qtdElementos, int *num) {
    *num += vet[qtdElementos-1] * pot10(qtdElementos-1);
    if (qtdElementos > 1) 
        return inverterNum(vet, qtdElementos-1, num);
    return *num;
}