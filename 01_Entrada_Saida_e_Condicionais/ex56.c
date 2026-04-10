#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    
    int operador;
    float n1, n2;

    printf("N1: ");
    scanf("%f",&n1);
    printf("N2: ");
    scanf("%f",&n2);
    printf("Operador (1. Adição; 2. Subtração; 3. Divisão; 4. Multiplicação): ");
    scanf("%d",&operador);

    if (operador == 1 || operador == 2) {
        if (operador == 1) {
            printf("A soma dos dois números é %.2f.",n1+n2);
        } else {
            printf("A diferença dos dois números é %.2f.",n1+n2);
        }
    } else {
        if (operador == 3) {
            if (n2 == 0)
                printf("ERRO: Divisão por zero não está definida.");
            else
                printf("O quociente dos dois números é %.2f.",n1/n2);
        } else {
            printf("O produto dos dois números é %.2f.",n1*n2);
        }
    }
}