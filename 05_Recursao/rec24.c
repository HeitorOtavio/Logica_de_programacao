#include <stdio.h>

int tribonacci(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n < 0);

    printf("%d", tribonacci(n));
}

int tribonacci(int num) {
    switch (num) {
        case 0:
            return 0;
        break;
        case 1:
            return 0;
        break;
        case 2:
            return 1;
        break;
    }
    return tribonacci(num-1)+tribonacci(num-2)+tribonacci(num-3);
}