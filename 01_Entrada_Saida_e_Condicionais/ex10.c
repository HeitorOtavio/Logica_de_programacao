#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float salario_hora, horas;
    printf("Indique o seu salário por hora, indicando as casas decimais com ponto final: ");
    scanf("%f",&salario_hora);
    printf("Indique a quantidade de horas trabalhadas por mês: ");
    scanf("%f",&horas);

    if ((salario_hora >= 0) && (horas >= 0)) {
        printf("O seu salário mensal é de, com duas casas decimais, R$%.2f.", (salario_hora * horas));
    } else {
        if (salario_hora < 0) {
            printf("ERRO: O salário por hora não pode ser negativo.\n");
        }
        if (horas < 0) {
            printf("ERRO: As horas mensais não podem ser negativas.");
        }
    }
}
