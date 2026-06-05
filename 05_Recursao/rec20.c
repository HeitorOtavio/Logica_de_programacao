#include <stdio.h>

int fatExponencial(int);
int pot(int, int);

int main() {
    int N;

    do {
        printf("N = ");
        scanf("%d", &N);
    } while (N <= 0);

    printf("%d", fatExponencial(N));
}

int fatExponencial(int num) {
    if (num == 1)
        return 1;
    return pot(num, fatExponencial(num - 1));
}

int pot(int num, int exp) {
    int s = 1;
    for (int i = 0; i < exp; i++)
        s *= num;
    return s;
}