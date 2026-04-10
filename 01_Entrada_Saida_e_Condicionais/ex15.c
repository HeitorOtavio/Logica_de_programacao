#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    float fahrenheit;
    printf("Temperatura (em ºF): ");
    scanf("%f",&fahrenheit);

    printf("O valor em Celsius é de %.2fºC.",((fahrenheit - 32)/9)*5);
}