#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    
    float n1, n2, opt, media;

    printf("Nota da primeira prova: ");
    scanf("%f",&n1);
    printf("Nota da segunda prova: ");
    scanf("%f",&n2);
    printf("Nota da prova optativa (se não a tiver feito, envie -1): ");
    scanf("%f",&opt);

    if ((n1 >= 0) && (n2 >= 0) && (opt >= 0)) {
        if (opt != -1) {
            if (n1 >= n2)
                n1 = opt;
            else
                n2 = opt;
        }

        media = (n1 + n2) / 2;

        printf("Média: %0.2f\n",media);

        if (media >= 6)
            printf("Estado: APROVADO");
        else
            if (media < 3)
                printf("Estado: REPROVADO");
            else
                printf("Estado: EXAME");
    } else {
        printf("ERRO: Nota(s) inválida(s).");
    }
}