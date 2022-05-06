// Faça um programa para determinar se uma pessoa é maior ou menor de idade.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float idade;

    printf("Digite a idade:\n");
    scanf("%f", &idade);

    if (idade < 18) {
        printf("Não é maior de idade%.f\n");        
    }else {
        printf("É maior de idade%.f\n");
    }

    return 0;
}