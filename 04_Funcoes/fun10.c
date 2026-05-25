#include <stdio.h>
#include <windows.h>

int ehPrimo(int);
int numPrimos(int, int);

int main() {
    SetConsoleOutputCP(65001);

    int x, y;
    
    do {
        printf("x = ");
        scanf("%d", &x);
        printf("y = ");
        scanf("%d", &y);
    } while (x > y);

    printf("Há %d número(s) primo(s) no intervalo.", numPrimos(x, y));
}

int ehPrimo(int num) {
    if (num < 2)
        return 0;
    for (int i = 2; i < num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}

int numPrimos(int x, int y) {
    int cont = 0;
    for (int i = x; i <= y; i++) {
        cont += ehPrimo(i);
    }
    return cont;
}