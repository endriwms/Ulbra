// Elabore um algoritmo que leia um número e informe se ele é par ou ímpar. Dica importante. Sabemos que um número é par quando o resto da divisão por 2 é igual a zero!

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int n1;

    printf("Informe um número:\n");
    scanf("%i", &n1);

    if (n1 % 2 == 0){
        printf("O número informado é par\n");
    }else {
        printf("O número informado é impar\n");
    }

    return 0;
}