#include <stdio.h>

int somaAte(int);

int main() {
    int x;

    printf("x: ");
    scanf("%d", &x);

    printf("R: %d", somaAte(x));
}

int somaAte(int x) {
    int s = 0;
    for (int i = 1; i <= x; i++) {
        s += i;
    }
    return s;
}