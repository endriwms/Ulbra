#include <stdio.h>
#define pi 3.14
int main() 
{
  float salario,salarioposaumento;

    printf("Digite o salario;\n");
      scanf("%f%*c", &salario);

    salarioposaumento = (salario*1.25);

    printf("O salário depois do aumento é: %.f\n",salarioposaumento);

  return 0;
}