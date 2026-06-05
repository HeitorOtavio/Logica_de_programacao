#include <stdio.h>

void imprimeSerie(int, int, int);

int main() {
    int i, j, k;

    printf("i = ");
    scanf("%d", &i);

    printf("j = ");
    scanf("%d", &j);

    printf("k = ");
    scanf("%d", &k);

    imprimeSerie(i, j, k);
}

void imprimeSerie(int ini, int fim, int incr) {
    if ((fim < ini && incr > 0) || (fim > ini && incr < 0) || (incr == 0))
        printf("%d", ini);
    else {
        if ((ini + incr > fim && incr > 0) || (ini + incr < fim && incr < 0)) {
            printf("%d", ini);
        } else {
            if (ini == fim)
                printf("%d", ini);
            else {
                printf("%d ", ini);
                imprimeSerie(ini + incr, fim, incr);
            }
        }
    }
}