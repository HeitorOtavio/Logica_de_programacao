#include <stdio.h>

int idenTriangulo(int, int, int);
int ehTriangulo(int, int, int);

int main() {
    int a, b, c;

    printf("a = ");
    scanf("%d", &a);

    printf("b = ");
    scanf("%d", &b);

    printf("c = ");
    scanf("%d", &c);

    printf("R: %d", idenTriangulo(a, b, c));
}

int idenTriangulo(int a, int b, int c) {
    if (ehTriangulo(a, b, c)) {
        if (a == b && a == c)
            return 1;
        if (a == b) {
            return 2;
        } else {
            if (a == c)
                return 2;
            if (b == c)
                return 2;
            return 3;
        }     
    }
    return 0;
}

int ehTriangulo(int a, int b, int c) {
    if (a + b > c)
        return 1;
    return 0;
}