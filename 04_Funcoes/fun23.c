#include <stdio.h>

int ehResta5(int, int);

int main() {
    int x, y;
    
    printf("x = ");
    scanf("%d", &x);
    do {
        printf("y (deve ser maior que x) = ");
        scanf("%d", &y);
    } while (y < x);

    ehResta5(x, y);
}

int ehResta5(int x, int y) {
    for (int i = x; i <= y; i++) {
        if (i % 13 == 5)
            printf("%d ",i);
    }
}