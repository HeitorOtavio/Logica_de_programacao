#include <stdio.h>

int seq(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("%d", seq(n));
}

int seq(int num) {
    switch (num) {
        case 1:
            return 1;
        break;
        case 2:
            return 2;
        break;
    }
    return 2 * seq(num - 1) + 3 * seq(num - 2);
}