//Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se 
//que este sofreu um desconto de 10%. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float preco, novo_preco, desconto;

    printf("Digite o preco:\n");
    scanf("%f", &preco);

    desconto = (preco*10/100);
    novo_preco = (preco-desconto);

    printf("O preco apos o desconto e:\n%.2f\n", novo_preco);

    return 0;
}