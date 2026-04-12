#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int max = 0;

    while (max <= 0) {
        printf("Valor máximo: ");
        scanf("%d",&max);
    }

    for (int i = 1; i <= max; i++) {
        printf("%d\n",i);
    }
}