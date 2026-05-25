#include <stdio.h>

int menorQuad(int);

int main() {
    int x;

    printf("x = ");
    scanf("%d", &x);

    printf("R: %d", menorQuad(x));
}

int menorQuad(int x) {
    int num = x;
    while ((num * num) > x) {
        num--;
    }
    return (num + 1);
}