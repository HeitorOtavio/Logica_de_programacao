#include <stdio.h>

float div(int, int);

int main() {
    int x, y;

    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);

    printf("X / Y = %.2f", div(x, y));
}

float div(int x, int y) {
    float quoc = 0;
    float mult = 1;

    // Evita divisões decimais infinitas (ex.: 10 / 3 = 3.333...)
    int lim = 2;

    while ((x > 0) && (lim > 0)) {
        if (x < y) {
            x *= 10;
            mult *= 0.1;
            lim--;
        }
        printf("%d -= %d",x,y);
        x -= y;
        quoc += 1 * mult;
    }

    return quoc;
}