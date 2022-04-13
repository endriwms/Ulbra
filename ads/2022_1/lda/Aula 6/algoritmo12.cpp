// Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule 
// e mostre a quantidade de salários mínimos que esse funcionário ganha

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float salminimo, salfuncionario, salporsal;

    printf("Digite o salário mínimo:\n");
    scanf("%f", &salminimo);

    printf("Digite o salário do funcionário:\n");
    scanf("%f", &salfuncionario);

    salporsal = (salfuncionario/salminimo);

    printf("A quantidade de salários minimos é de:\n%.2f\n", salporsal);

    return 0;
}