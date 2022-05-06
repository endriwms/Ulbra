#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, n3, n4;

    printf("digite três números em ordem crescente\n");
    scanf("%f", &n1);
    scanf("%f", &n2);
    scanf("%f", &n3);

    printf("digite um número fora de ordem\n");
    scanf("%f", &n4);


    if (n4 > n3) {
        printf("A ordem Decrescente é: %.f %.f %.f %.f\n", n4, n3, n2, n1);
    }

    if (n4>n2 && n4<n3) {
        printf("A ordem decrescente é: %.f %.f %.f %.f\n", n3, n4, n2, n1);
    }

    if (n4>n1 && n4<n2) {
        printf("A ordem decrescente é: %.f %.f %.f %.f\n", n3, n2, n4, n1);
    }

    if (n4<n1) {
        printf("A ordem decrescente é: %.f %.f %.f %.f\n", n3, n2, n1, n4);
    }
    

    return 0;
}