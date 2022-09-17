// Faça um programa para efetuar a leitura de quatro números e apresentar os números que são divisíveis por 2 e por 3.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int v1, v2, v3, v4, inteiro;

    printf("Digite o valor 1:\n");
    scanf("%i", &v1);

    printf("Digite o valor 2:\n");
    scanf("%i", &v2);

    printf("Digite o valor 3:\n");
    scanf("%i", &v3);

    printf("Digite o valor 4:\n");
    scanf("%i", &v4);
    
    if (v1 % 2 == 0){
        printf("É divisivel por 2\n");
    }else {
        if (v1 % 3 == 0){
            printf("É divisivel por 3\n");
        }
    }

    if (v2 % 2 == 0){
        printf("É divisivel por 2\n");
    }else {
        if (v2 % 3 == 0){
            printf("É divisivel por 3\n");
        }
    }

    if (v3 % 2 == 0){
        printf("É divisivel por 2\n");
    }else {
        if (v4 % 3 == 0){
            printf("É divisivel por 3\n");
        }
    }

    if (v4 % 2 == 0){
        printf("É divisivel por 2\n");
    }else {
        if (v4 % 3 == 0){
            printf("É divisivel por 3\n");
        }
    }

    return 0;
}