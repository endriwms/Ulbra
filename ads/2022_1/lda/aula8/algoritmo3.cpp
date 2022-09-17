// Faça um programa para ler dois valores numéricos e apresentar a diferença do maior pelo menor.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, dif1, dif2;

    printf("Digite o n1:\n");
    scanf("%f", &n1);

    printf("Digite o n2:\n");
    scanf("%f", &n2);

    if (n1 > n2) {
        dif1 = (n1 - n2);
        printf("A diferença é:%.f\n", dif1);
    }else if (n2 > n1) {
        dif2 = (n2 - n1);
        printf("A diferença é:%.f\n", dif2);
    }

    return 0;
}