#include <stdio.h>

int pot(int, int);

int main() {
    int x, y;

    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);

    printf("X elevado a Y = %d", pot(x, y));
}

int pot(int x, int y) {
    // Soma
    int s = 1;

    for (int i = 0; i < y; i++) {
        s *= x;
    }

    return s;
}