#include <stdio.h>

int potencia(int, int);

int main() {
    int k, n;

    printf("Base: ");
    scanf("%d", &k);

    printf("Expoente: ");
    scanf("%d", &n);

    printf("\n%d", potencia(k, n));
}

int potencia(int k, int n) {
    if (n == 0)
        return 1;
    if (n == 1) {
        return k;
    }
    return k * potencia(k, n-1);
}