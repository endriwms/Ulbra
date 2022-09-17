// Faça um programa que leia dois números e some 100 ao maior valor e apresente o resultado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, result1, result2;

    printf("Digite o primeiro número:\n");
    scanf("%f", &n1);

    printf("Digite o segundo número:\n");
    scanf("%f", &n2);

    if (n1 > n2) {
        result1 = (n1 + 100);
        printf("O resultado é:%.f\n", result1);
    }else if (n2 > n1) {
        result2 = (n2 + 100);
        printf("O resultado é:%.f\n", result2);
    }

    return 0;
}