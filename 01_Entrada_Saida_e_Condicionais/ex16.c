#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float n1, n2, n3;

    printf("Nota 1: ");
    scanf("%f",&n1);
    printf("Nota 2: ");
    scanf("%f",&n2);
    printf("Nota 3: ");
    scanf("%f",&n3);

    if (n1 >= 0 && n2 >= 0 && n3 >= 0) {
        printf("A média das três notas é de %.2f.",(n1*2 + n2*3 + n3*5)/10);
    } else {
        printf("ERRO: Valor(es) inválido(s).");
    }
}