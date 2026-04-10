#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    
    float n1, n2;

    printf("Primeiro valor: ");
    scanf("%f",&n1);
    printf("Primeiro valor: ");
    scanf("%f",&n2);

    if (n1 == n2)
        printf("Números iguais.");
    else
        if (n1 > n2)
            printf("O primeiro é o maior.");
        else
            printf("O segundo é o maior.");
}