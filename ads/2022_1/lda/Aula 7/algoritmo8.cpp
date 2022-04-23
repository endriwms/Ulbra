#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <cmath>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

   float opcoes, n1, n2, somar, raizQ;

    printf("Menu de Opções:\n");
    printf("Se deseja Somar dois números digite 1\n");
    printf("Se deseja saber a Raíz Quadrada de um número digite 2\n");
    printf("Qual sua opção?\n");
    scanf("%f", &opcoes);

    if (opcoes == 1)
    {
        printf("Você escolheu a opção de Somar...\n");
        printf("Digite o primeiro número:\n");
        scanf("%f", &n1);
        printf("Digite o segundo número:\n");
        scanf("%f", &n2);

        somar = (n1+n2);
        printf("A soma dos números é: %.f\n", somar);
    }
    else if (opcoes == 2)
    {
        printf("Você escolheu a opção de Raíz Quadrada...\n");
        printf("Digite um número:\n");
        scanf("%f", &n1);

        raizQ = sqrt(n1);
        printf("A Raíz Quadrada do número é: %.f\n", raizQ);
    }

    else if (opcoes != 1 && opcoes != 2)
    {
        printf("Opção Inválida!\n");
    }
    
    
    return 0;
}