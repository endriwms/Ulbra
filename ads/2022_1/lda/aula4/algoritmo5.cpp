#include <stdio.h>
#define pi 3.14
int main() 
{
  float salario,aumento,novosalario;

    printf("Digite o valor do salario:\n");
      scanf("%f",&salario);

    printf("Digite a porcentagem do aumento:\n");
      scanf("%f",&aumento);

    aumento = (salario*aumento/100);
    novosalario = (aumento+salario);

    printf("O valor do aumento e:%.2f",aumento);
    printf("O valor do novo salario e:%.2f",novosalario);

  return 0;
}