#include <stdio.h>

int combinar(int, int);
int fat(int);

int main() {
    int n, r;

    printf("n = ");
    scanf("%d", &n);

    printf("r = ");
    scanf("%d", &r);

    printf("c = %d", combinar(n, r));
}

int combinar(int n, int r) {
    int fatN = fat(n);
    int fatR = fat(r);
    int fatDif = fat(n - r);
    return fatN / (fatR * fatDif);
}

int fat(int n) {
    int t = 1;
    for (int i = n; i >= 1; i--) {
        t *= i;
    }
    return t;
}