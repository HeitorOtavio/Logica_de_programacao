#include <stdio.h>

int multipRec(int, int);

int main() {
    int n1, n2;

    printf("n1 = ");
    scanf("%d", &n1);

    printf("n2 = ");
    scanf("%d", &n2);

    printf("%d", multipRec(n1, n2));
}

int multipRec(int a, int b) {
    if (b == 1)
        return a;
    if (b == 0)
        return 0;
    return a + multipRec(a, b-1);
}