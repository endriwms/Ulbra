//Faça um programa que receba três números, calcule e mostre a multiplicação desses números.//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int main() 
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float n1, n2, n3, multiplicacao;

    printf("Digite o número 1:\n");
    scanf("%f", &n1);

    printf("Digite o número 2:\n");
    scanf("%f", &n2);

    printf("Digite o número 3:\n");
    scanf("%f", &n3);

    multiplicacao = (n1*n2*n3);

    printf("O resultado da multiplicação é:\n%.2f\n", multiplicacao);

  return 0;
}