// Faça um programa para ler três valores quaisquer e escrever o maior dos 3.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float v1, v2, v3, vMaior;

    printf("Digite o valor 1:\n");
    scanf("%f", &v1);

    printf("Digite o valor 2:\n");
    scanf("%f", &v2);

    printf("Digite o valor 3:\n");
    scanf("%f", &v3);
    
    if (v1 > v2 && v1 > v3){
        printf("O maior número é o:%.f\n", v1);
    }else if (v2 > v1 && v2 > v3){
        printf("O maior número é o:%.f\n", v2);
    }else if (v3 > v1 && v3 > v2){
        printf("O maior número é o:%.f\n", v3);
    }else if (v1 = v2 = v3){
        printf("Os números são iguais");
    }
    return 0;
}