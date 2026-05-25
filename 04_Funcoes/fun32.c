#include <stdio.h>
#include <windows.h>

void convFC();

int main() {
    SetConsoleOutputCP(65001);
    printf("Tabela f(ºF) = ºC\n");
    convFC();
}

void convFC() {
    printf("Início: ");
    for (int i = 50; i <= 150; i++) {
        // 5(F - 32)/9 = (5F - 160)/9
        printf("%.2fºC   ", (float) (5*i - 160)/9);
        if ((i % 5) == 0)
            printf("\n");
    }
}