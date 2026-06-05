#include <stdio.h>
#include <string.h>
#include <windows.h>

typedef struct {
    char nome[50];
    int RA;
    float notas[3];
    int frequencia;
} Aluno;

void imprimirMenu();
void inserirAluno(int, Aluno[]);
void mostrarAluno(Aluno[]);
void mostrarTurma(Aluno[], int);
void removerAluno(Aluno[], int*);
void travarTela();

int main() {
    SetConsoleOutputCP(65001);

    Aluno turma[50];
    int op, qtdAlunos=0;

    printf("\nSistema de Gerenciamento de Turma ========================\n");

    while (op != 5) {
        imprimirMenu();
        scanf("%d", &op);
        switch (op) {
            case 1:
                if (qtdAlunos < 30) {
                    inserirAluno(qtdAlunos, turma);
                    qtdAlunos++;
                } else {
                    printf("[ERRO] Turma cheia.");
                }
            break;
            case 2:
                if (qtdAlunos != 0) {
                    mostrarTurma(turma, qtdAlunos);
                } else {
                    printf("[ERRO] A turma está vazia.");
                    travarTela();
                }
            break;
            case 3:
                if (qtdAlunos != 0) {
                    mostrarAluno(turma);
                } else {
                    printf("[ERRO] Não há alunos(as) na turma");
                    travarTela();
                }
            break;
            case 4:
                if (qtdAlunos != 0) {
                    removerAluno(turma, &qtdAlunos);
                    printf("Quantidade atual de alunos na turma: %d", qtdAlunos);
                } else {
                    printf("[ERRO] Não há alunos(as) na turma.");
                    travarTela();
                }
            break;
            default:
                if (op != 5) {
                    printf("[ERRO] Valor inválido.");
                    travarTela();
                }
            break;
        }
    }
}

void imprimirMenu() {
    printf("\n1) Inserir aluno\n");
    printf("2) Imprimir turma\n");
    printf("3) Mostrar aluno por RA\n");
    printf("4) Remover aluno por RA\n");
    printf("5) Finalizar\n\n");
    printf("=> ");
}

void inserirAluno(int index, Aluno turma[]) {
    printf("\nNome: ");
    getchar();
    fgets(turma[index].nome, sizeof(turma[index].nome), stdin);
    turma[index].nome[strlen(turma[index].nome)-1] = '\0'; 
    
    printf("RA: ");
    scanf("%d", &turma[index].RA);

    for (int i = 0; i < 3; i++) {
        printf("Nota %d: ",i+1);
        scanf("%f", &turma[index].notas[i]);
    }

    printf("Frequência: ");
    scanf("%d", &turma[index].frequencia);

    printf("\n[CONCLUÍDO] Aluno(a) adicionado(a).");
    travarTela();
}

void mostrarAluno(Aluno turma[]) {
    int RA_selecionado, naoAchou=1;
    printf("RA: ");
    scanf("%d", &RA_selecionado);
    for (int i = 0; i < 50 * naoAchou; i++) {
        if (turma[i].RA == RA_selecionado) {
            printf("Aluno(a) encontrado(a):\n\n");
            printf("Nome: %s | ", turma[i].nome);
            printf("RA: %d |\n", RA_selecionado);
            for (int j = 0; j < 3; j++) {
                printf("Nota %d: ", j+1);
                printf("%.2f | ", turma[i].notas[j]);
            }
            printf("\nFrequência: %d%", turma[i].frequencia);

            naoAchou = 0;
            travarTela();
        }
    }
    if (naoAchou) {
        printf("[ERRO] Aluno(a) não encontrado(a).");
        travarTela();
    }
}

void mostrarTurma(Aluno turma[], int qtdAlunos) {
    printf("Quantidade de alunos na turma: %d\n\n", qtdAlunos);
    printf("| RA | Nome | Nota 1 | Nota 2 | Nota 3 | Frequência |\n");
    for (int i = 0; i < qtdAlunos; i++) {
        printf("| %d |", turma[i].RA);
        printf(" %s |", turma[i].nome);
        for (int j = 0; j < 3; j++)
            printf(" %.2f |", turma[i].notas[j]);
        printf(" %d |", turma[i].frequencia);
        printf("\n");
    }
    travarTela();
}

void removerAluno(Aluno turma[], int *qtdAlunos) {
    int RA_selecionado, naoAchou = 1;
    char op;
    printf("RA: ");
    scanf("%d", &RA_selecionado);
    
    getchar();
    printf("[AVISO] Você está prestes a deletar permanentemente um aluno da turma. Tem certeza que quer continuar? (s/n)");
    scanf("%c", &op);

    if (op == 's' || op == 'S') {
        printf("oi!");
        for (int i = 0; i < *qtdAlunos * naoAchou; i++) {
            if (RA_selecionado == turma[i].RA) {
                for (int j = i; j < *qtdAlunos; j++) {
                    turma[j] = turma[j + 1];
                }
                naoAchou = 0;
            }
        }
        // Nota para mim mesmo: usar "--" aqui não reduz a quantidade de alunos.
        *qtdAlunos -= 1;
        printf("\n[CONCLUÍDO] Aluno deletado com sucesso.");
        travarTela();
    }
}

void travarTela() {
    printf("\n\n(Aperte Enter para voltar ao menu)");
    getchar();
    getchar();    
}