#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float acum = 0;

    for (int i = 15; i < 25; i++) {
        acum += i;
    }

    printf("A média aritmética dos valores entre [15,25) é de %.1f.", acum/10);
}