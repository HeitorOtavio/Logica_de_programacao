#include <stdio.h>

int somaSerie(int, int, int);

int main() {
    int i, j, k;

    printf("i = ");
    scanf("%d", &i);

    printf("j = ");
    scanf("%d", &j);

    printf("k = ");
    scanf("%d", &k);

    printf("%d", somaSerie(i, j, k));
}

int somaSerie(int ini, int fim, int incr) {
    if (ini == fim)
        return ini;
    if ((ini > fim && incr >= 0) || (ini < fim && incr <= 0)) {
        return ini;
    }
    if ((ini + incr <= fim && incr < 0) || (ini + incr >= fim && incr > 0)) {
        return ini;
    } else {
        return ini + somaSerie(ini + incr, fim, incr);
    }
}