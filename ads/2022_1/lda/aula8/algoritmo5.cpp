// Faça um programa que lê dois valores e escreve cada um juntamente com a mensagem: “É múltiplo de 2” ou “Não é múltiplo de dois”.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int v1, v2;

    printf("Digite o valor 1:\n");
    scanf("%i", &v1);

    printf("Digite o valor 2:\n");
    scanf("%i", &v2);
    
    if (v1 %2 == 0){
        printf("É multiplo\n");
    }else {
        printf("Não é multiplo\n");
    }
    
    return 0;
}