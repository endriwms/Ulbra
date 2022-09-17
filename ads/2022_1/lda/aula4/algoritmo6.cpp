#include <stdio.h>
#define pi 3.14
int main() 
{
  float salario,areceber,grat,imp;

    printf("Digite o salario base\n");
      scanf("%f",&salario);

    grat = (salario*5/100);
    imp = (salario*7/100);
    areceber = (salario+grat-imp);

    printf("O valor a receber e:%.2f",areceber);

  return 0;
}