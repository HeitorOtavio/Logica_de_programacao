#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float raio;

    printf("Raio do círculo: ");
    scanf("%f",&raio);

    if (raio>0) {
        printf("A área do raio é de, aproximadamente, %.2f",3.14*(raio*raio));
    } else {
        printf("ERRO: Raio inválido.");
    }
}