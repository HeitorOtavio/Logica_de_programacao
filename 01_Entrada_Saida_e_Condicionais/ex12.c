#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float salario, reajuste;

    printf("Seu salário mensal: ");
    scanf("%f",&salario);
    printf("Reajuste (o valor será dividido por 100): ");
    scanf("%f",&reajuste);

    if (salario > 0) {
        salario = salario + salario * (reajuste / 100);
        printf("Seu salário reajustado é de R$%.2f.",salario);
    } else {
        printf("ERRO: Salário inválido.");
    }
}