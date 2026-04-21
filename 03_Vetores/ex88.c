#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int vetorComNum[20], vetorSemNum[19], num=1, numDetectado=0;

    for (int i = 0; i < 20; i++) {
        vetorComNum[i] = i;
    }

    /* Como "num" está definida inicialmente e especificamente
    dentro do intervalo permitido, não ativará a condicional ao entrar na repetição. */
    do {
        if (num < 0 || num >= 20)
            printf("Número inválido\n");
            
        printf("Selecione um número: ");
        scanf("%d", &num);
    } while (num < 0 || num >= 20);

    for (int i = 0; i < 20; i++) {
        if (num != i)        
            vetorSemNum[i] = i+numDetectado;
        else 
            if (num != 19)
                // Passa a por o sucessor de "i", exceto quando o "num" for 19
                numDetectado=1;
                vetorSemNum[i] = i+numDetectado;
    }

    for (int i = 0; i < 19; i++) {
        switch (i) {
            case 0:
                printf("Vetor sem o número: {%d, ", vetorSemNum[0]);
            break;
            case 18:
                printf("%d}", vetorSemNum[18]);
            break;
            default:
                printf("%d, ", vetorSemNum[i]);
            break;
        }
    }
}