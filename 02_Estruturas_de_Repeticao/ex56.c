#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int numRef = 0;

    while (numRef <= 0 || numRef > 10) {
        printf("Insira um valor para a sua tabuada: ");
        scanf("%d",&numRef);
    }

    printf("\nTABUADA DO %d:\n\n",numRef);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d\n", numRef, i, numRef*i);
    }
}