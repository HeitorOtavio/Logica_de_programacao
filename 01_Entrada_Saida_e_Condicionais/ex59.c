#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    
    float a1, a2, a3;

    printf("A1: ");
    scanf("%f",&a1);
    printf("A2: ");
    scanf("%f",&a2);
    printf("A3: ");
    scanf("%f",&a3);

    if ((a1 > 0) && (a2 > 0) && (a3 > 0)) {
        if (a1 + a2 + a3 == 180) {
            if ((a1 == 90) || (a2 == 90) || (a3 == 90)) {
                printf("Triângulo retângulo.");
            } else {
                if ((a1 > 90) || (a2 > 90) || (a3 > 90)) {
                    printf("Triângulo obtusângulo.");
                } else {
                    printf("Triângulo acutângulo.");
                }
            }
        } else {
            printf("ERRO: A soma dos ângulos não dá 180º.");
        }
    } else {
        printf("ERRO: Ângulo(s) inválido(s).");
    }
}