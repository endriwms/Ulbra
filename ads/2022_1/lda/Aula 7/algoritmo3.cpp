#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float n1, n2;

    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);

    printf("Digite o segunda número:\n");
    scanf("%f", &n2);

    if (n1 > n2) {
        printf("O número maior é\n", n1);
    }

    if (n2 > n1) {
        printf("O número maior é\n", n2);
    }

    if (n1 = n2) {
        printf("Os números são iguais\n");
    }

    return 0;
}