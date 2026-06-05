#include <stdio.h>

int fatQuadruplo(int);
int fat(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("%d", fatQuadruplo(n));
}

int fatQuadruplo(int num) {
    if (num == 1)
        return 2;
    return (fat(2 * num) / fat(num)) * fatQuadruplo(num - 1);
}

int fat(int num) {
    int s = 1;
    for (int i = 0; i < num; i++)
        s *= num - i;
    return s;
}