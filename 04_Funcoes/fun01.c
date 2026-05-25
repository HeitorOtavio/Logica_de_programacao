#include <stdio.h>

int mult(int, int);

int main() {
    int a, b;

    printf("A: ");
    scanf("%d", &a);
    printf("B: ");
    scanf("%d", &b);

    printf("Resultado: %d", mult(a,b));
}

int mult(int a, int b) {
    int prod = 0;
    for (int i = 1; i <= b; i++) {
        prod += a;
    }
    return prod;
}