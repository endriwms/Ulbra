// Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, 
// considerando peso 2 para a primeira e peso 3 para a segunda.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float nota1, nota2, mediaP;

    printf("Digite a nota 1:\n");
    scanf("%f", &nota1);

    printf("Digite a nota 2:\n");
    scanf("%f", &nota2);

    mediaP = (nota1*2)+(nota2*3)/3+2;

    printf("A media ponderada e:\n%.2f\n", mediaP);

    return 0;
}