#include <stdio.h>

int hiperFat(int);
int pot(int);

int main() {
    int N;

    do {
        printf("N = ");
        scanf("%d", &N);
    } while (N <= 0);

    printf("%d", hiperFat(N));
}

int hiperFat(int num) {
    if (num == 1)
        return 1;
    return pot(num) * hiperFat(num - 1);
}

int pot(int num) {
    int s = 1;
    for (int i = 0; i < num; i++)
        s *= num;
    return s;
}