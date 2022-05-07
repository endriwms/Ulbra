// Escreva um programa em C que receba um valor inteiro e diga se ele é múltiplo de 5.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int n1;

    printf("Informe um número:\n");
    scanf("%i", &n1);

    if (n1 % 5 == 0){
        printf("O número informado é multiplo de 5\n");
    }else {
        printf("O número informado não é multiplo de 5\n");
    }
    
    return 0;
}