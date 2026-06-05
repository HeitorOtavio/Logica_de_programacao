#include <stdio.h>
#include <string.h>

void convDecBin(int);

int main() {
    int n;
    
    printf("n = ");
    scanf("%d", &n);

    convDecBin(n);
}

void convDecBin(int num) {
    if (num != 1) {
        convDecBin(num / 2);
    }
    printf("%c", 48 + num%2);
}