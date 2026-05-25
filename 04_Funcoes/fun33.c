#include <stdio.h>

void divisores(int);

int main() {
    int n;

    printf("n = ");
    scanf("%d", &n);

    divisores(n);
}

void divisores(int num) {
    printf("Divisores de %d:\n", num);
    for (int i = num; i > 0; i--) {
        if (num % i == 0)
            printf("%d ", i);
    }
}