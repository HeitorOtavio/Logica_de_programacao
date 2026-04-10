#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    
    float n1, n2, n3;

    printf("N1: ");
    scanf("%f",&n1);
    printf("N2: ");
    scanf("%f",&n2);
    printf("N3: ");
    scanf("%f",&n3);

    if ((n1 < n2) && (n1 < n3))
        if (n2 < n3)
            printf("%f < %f < %f",n1,n2,n3);
        else
            printf("%f < %f < %f",n1,n3,n2);
    else
        if (n1 < n2)
            printf("%f < %f < %f",n3,n1,n2);
        else
            if (n1 < n3)
                printf("%f < %f < %f",n2,n1,n3);
            else
                if (n2 < n3)
                    printf("%f < %f < %f",n2,n3,n1);
                else
                    printf("%f < %f < %f",n3,n2,n1);
}