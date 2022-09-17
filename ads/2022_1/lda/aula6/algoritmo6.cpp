//Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa 
//que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu 
//salário final.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float salfixo, valvenda, comissao, salfinal;

    printf("Digite o salário:\n");
    scanf("%f", &salfixo);

    printf("Digite o valor das vendas:\n");
    scanf("%f", &valvenda);

    comissao = (salario+4/10);
    salfinal = (salfixo+comissao+valvenda);

    printf("O Salário final é:\n%.2f\n", salfinal);

    return 0;
}