// Obs.: 'fStrcat()' não deu certo
#include <stdio.h>
#include <windows.h>

// Nomes modificados para evitar conflito com as funções existentes
int fStrlen(char[]);
int fStrcmp(char[], char[]);
void fStrncpy(char[], char[], int);

// Não funciona
void fStrcat(char[], char[]);
void fStrfind(char[], char[]);

int main() {
    SetConsoleOutputCP(65001);
    char str[]="cavalo";
    char cop[6]={'0','0','0','0','0','\0'};

    printf("Tamanho de '%s': %d\n\n", str, fStrlen(str));

    printf("'%s' é igual a '%s'? %d\n", str, "Bolo", fStrcmp(str, "Bolo"));
    printf("'%s' é igual a '%s'? %d\n\n", str, str, fStrcmp(str, str));

    fStrncpy(cop, str, 5);
    printf("'%s' é substring de '%s'\n\n", cop, str);

    printf("Encontre 'cavalo' na string 'O cavalo pulou sobre um cavalo chegando ao outro cavalo.': \n");
    fStrfind(str, "O cavalo pulou sobre um cavalo chegando ao outro cavalo.");
}

int fStrlen(char str[]) {
    int index=0;
    while (1) {
        if (str[index] == '\0')
            return index;
        index++;
    }
}

int fStrcmp(char str1[], char cop[]) {
    if (fStrlen(str1) != fStrlen(cop))
        return 0;
    for (int i = 0; i < fStrlen(str1); i++) {
        if (str1[i] != cop[i])
            return 0;
    }
    return 1;
}

void fStrncpy(char str_d[], char str_o[], int tam) {
    for (int i = 0; i < tam; i++) {
        str_d[i] = str_o[i];
    }
}

// Não está funcionando
void fStrfind(char str_d[], char str_o[]) {
    int pos[] = {-1}, tamD = fStrlen(str_d), quebraLoop = 1, cont=0;

    for (int i = 0; i < fStrlen(str_o); i++) {
        if (str_d[0] == str_o[i]) {
            for (int j = 0; j < tamD * quebraLoop; j++) {
                if (str_d[j] != str_o[i + j]) {
                    quebraLoop = 0;
                    break;
                }
            }

            if (quebraLoop) {
                pos[cont] = i;
                cont++;
            } else {
                quebraLoop = 1;
            }
        }
    }

    for (int i = 0; i <= cont; i++) {
        printf("%d ", pos[i]);
    }
}

// Não funciona
void fStrcat(char str_d[], char str_o[]) {
    int tam = fStrlen(str_d);
    int tam2 = fStrlen(str_o);
    int cont = 0;

    for (int i = tam; i <= tam+tam2; i++, cont++) {
        if (i == tam+tam2) {
            str_d[tam2] = '\0';
            break;
        }
    }
}