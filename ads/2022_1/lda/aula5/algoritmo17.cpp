#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Portuguese");
    float salario, cheque1, cheque2, cpmf1, cpmf2, saldo;

    printf("Digite o salário:\n");
    scanf("%f",&salario);

    printf("Digite o valor do cheque 1:\n");
    scanf("%f",&cheque1);

    printf("Digite o valor do cheque 2:\n");
    scanf("%f",&cheque2);

    cpmf1 = (cheque1*0.38/100);
    cpmf2 = (cheque2*0.38/100);
    saldo = (salario-cheque1-cheque2-cpmf1-cpmf2);
    
    printf("O saldo atual é:%.2f\n",saldo);

  return 0;
}