#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int cont = 0;
    while (cont < 10) {
        cont++;
    }
    printf("Contou até %d.",cont);
}