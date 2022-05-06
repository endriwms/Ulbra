//Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float lado, area;

    printf("Digite o tamanho do lado:\n");
    scanf("%f", &lado);

    area = (lado * lado);

    printf("A area do quadrado é de:\n%.2f\n", area);

    return 0;
}