#include <stdio.h>
#include <math.h>
#include <windows.h>

int main ()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float salJoao, conta1, conta2;

    printf("digite o salário de João\n");
    scanf("%f", &salJoao);

    printf("digite o valor da primeira conta\n");
    scanf("%f", &conta1);

    printf("digite o valor da segunda conta\n");
    scanf("%f", &conta2);

    conta1 = (conta1 + conta1 * 2/100); 
    conta2 = (conta2 + conta2 * 2/100);


    printf("Salário:           R$ %.2f\n", salJoao); // imprime o valor de salario
    printf("Conta 1:           R$ %.2f\n", conta1); // imprime o valor de conta1
    printf("Conta 2:           R$ %.2f\n", conta2);  // imprime o valor de conta2
    printf("Salário Restante:  R$ %.2f\n", salJoao - conta1 - conta2); // imprime o valor restante

    return 0;
}

//João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar 
//multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de 
//João. 