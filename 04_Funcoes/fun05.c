#include <stdio.h>

int ehPrimo(int);

int main() {
    int x;

    printf("X: ");
    scanf("%d", &x);

    printf("%d", ehPrimo(x));
}

int ehPrimo(int a) {
    int primo = 1;

    if (a < 2)
        return primo = 0;
    
    for (int i = 2; i < a*primo; i++) {
        if (a % i == 0)
            return primo = 0;
    }

    return primo;
}