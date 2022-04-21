#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float d1, m1, a1, d2, m2, a2;

    printf("Digite a primeira data:\n");
    
    printf("Dia (dd):\n");
    scanf("%f", &d1);

    printf("Mês (mm):\n");
    scanf("%f", &m1);

    printf("Ano (aaaa):\n");
    scanf("%f", &a1);

    printf("Digite a segunda data:\n");

    printf("Dia (dd):\n");
    scanf("%f", &d2);

    printf("Mês (mm):\n");
    scanf("%f", &m2);

    printf("Ano (aaaa):\n");
    scanf("%f", &a2);

    if (a1 > a2) {
       printf("A maior data é:%.f %.f %.f\n", d1, m1, a1);
    }
    
    else if (a2 > a1) {
            printf("A maior data é: %.f %.f %.f\n", d2, m2, a2);
        }
        

    return 0;
}