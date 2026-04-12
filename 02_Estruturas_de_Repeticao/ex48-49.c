#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float n1, n2;
    char op = 'S';

    while (op == 's' || op == 'S') {
        do {
            printf("N1: ");
            scanf("%f",&n1);
        } while (n1 < 0 || n1 > 10);

        do {
            printf("N2: ");
            scanf("%f",&n2);
        } while (n2 < 0 || n2 > 10);

        printf("A média simples é %.2f",(n1+n2)/2);

        do {
            printf("\nNOVO CÁLCULO? (S/N)\n");
            scanf(" %c",&op);
        } while (op != 's' && op != 'S' && op != 'n' && op != 'N');
    }
}