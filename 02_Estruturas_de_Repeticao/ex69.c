#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float custoMerc, valorTotal = 0;
    int nMerc = 0;
    char opt = 's';

    while (opt == 's' || opt == 'S') {
        nMerc++;
        do {
            printf("Custo da mercadoria: ");
            scanf("%f",&custoMerc);
        } while (custoMerc <= 0);
        
        valorTotal += custoMerc;

        do {
            printf("MAIS MERCADORIAS? (S/N)\n=> ");
            scanf(" %c", &opt);
        } while (opt != 's' && opt != 'S' && opt != 'n' && opt != 'N');
    }

    printf("Custo total das mercadorias: %.2f;\n", valorTotal);
    printf("Média do valor das mercadorias: %.2f", valorTotal/nMerc);
}