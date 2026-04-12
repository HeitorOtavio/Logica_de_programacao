#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    int nAlunos = 0, nota = 5;
    float acumNotas = 0;

    while (nAlunos <= 0) {
        printf("Número de alunos na turma: ");
        scanf("%d",&nAlunos);
    }

    for (int i = 1; i <= nAlunos; i++) {
        if (nota == 10) {
            nota = 5;
        } else {
            nota++;
        }

        acumNotas += nota;
    }

    printf("A média de nota dos alunos é de: %.2f.", acumNotas/nAlunos);
}