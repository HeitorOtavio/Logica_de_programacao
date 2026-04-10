#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float salario_fixo, valor_vendas, valor_por_carro;
    int qtd_carros;

    printf("Salário fixo mensal: ");
    scanf("%f",&salario_fixo);

    printf("Valor total das vendas: ");
    scanf("%f",&valor_vendas);
    
    printf("Valor por carro: ");
    scanf("%f",&valor_por_carro);

    printf("Quantidade de carros vendidos: ");
    scanf("%d",&qtd_carros);

    if (salario_fixo >= 0 && valor_vendas >= 0 && valor_por_carro >= 0 && qtd_carros >= 0) {
        printf("O vendedor ganhará das suas vendas R$%.2f.", salario_fixo+(valor_por_carro*qtd_carros)+(valor_vendas*0.05));
    } else {
        printf("ERRO: Valor(es) inválido(s).");
    }
}