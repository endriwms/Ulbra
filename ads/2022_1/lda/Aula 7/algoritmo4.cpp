#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float n1, n2, n3;

    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);

    printf("Digite o segundo número:\n");
    scanf("%f", &n2);

    printf("Digite o terceiro número:\n");
    scanf("%f", &n3);

    if (n1 < n2 && n1 < n3) {
        if (n2 < n3)
        printf("O número maior é\n", n1);
    }


    return 0;
}