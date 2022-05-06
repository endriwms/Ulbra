//Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo segundo.//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int main() 
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float n1, n2, resultado;

    printf("Digite o numero 1:\n");
    scanf("%f",&n1);

    printf("Digite o numero 2:\n");
    scanf("%f",&n2);

    resultado = (n1-n2);
    
    printf("A subtração do primeiro número pelo segundo é:\n%.2f\n",resultado);

  return 0;
}