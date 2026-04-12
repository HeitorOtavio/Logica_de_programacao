#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);

    for (int i = 1; i <= 10; i++) {
        printf("%d * 8 = %d\n",i,i*8);
    }
}