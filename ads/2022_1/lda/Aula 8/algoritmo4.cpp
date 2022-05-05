// Faça um programa para ler dois números. Se os números forem iguais imprimir a mensagem: "NÚMEROS IGUAIS" e encerrar a execução; caso contrário, imprimir o de maior valor.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float A, B, result;

    printf("Digite o n1:\n");
    scanf("%f", &A);

    printf("Digite o n2:\n");
    scanf("%f", &B);

    if (A == B){
        printf("Os números são iguais:%.f\n");
    }else {
        if (A > B){
            printf("O número maior é:%.f\n", A);
        }else {
            printf("O número maior é:%.f\n", B);
        }
            
    }
    
    return 0;
}