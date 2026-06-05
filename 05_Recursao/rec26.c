#include <stdio.h>

int seqPadovan(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n < 0);

    printf("%d", seqPadovan(n));
}

int seqPadovan(int num) {
    if (num < 3)
        return 1;
    return seqPadovan(num - 2) + seqPadovan(num - 3);
}

