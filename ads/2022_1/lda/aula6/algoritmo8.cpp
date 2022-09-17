//Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float pesokg, pesomg;

    printf("Digite o peso em KG:\n");
    scanf("%f", &pesokg);

    pesomg = (pesokg *1000);

    printf("O peso em miligramas é de:\n%.2f\n", pesomg);

    return 0;
}