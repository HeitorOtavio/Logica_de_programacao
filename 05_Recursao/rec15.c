#include <stdio.h>

float sFrac(float, float);

int main() {
    float n;

    printf("n = ");
    scanf("%f", &n);

    printf("%.2f", sFrac(n, 1));
}

float sFrac(float num, float aux) {
    if (aux == num)
        return (1 + aux * aux) / aux;
    return ((1 + aux * aux) / aux) + sFrac(num, aux + 1);
}