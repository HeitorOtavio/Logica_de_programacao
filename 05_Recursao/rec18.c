#include <stdio.h>

int superFat(int);
int fat(int);

int main() {
    int n;

    do {
        printf("n = ");
        scanf("%d", &n);
    } while (n <= 0);

    printf("%d", superFat(n));
}

int superFat(int num) {
    if (num == 1)
        return 1;
    return fat(num) * superFat(num - 1);
}

int fat(int num) {
    int s = 1;
    for (int i = 0; i < num; i++)
        s *= num - i;
    return s;
}

