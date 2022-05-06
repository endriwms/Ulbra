#include <stdio.h>
#define pi 3.14
int main() 
{
  float salario,areceber,imp;

    printf("Digite o salario base\n");
      scanf("%f",&salario);

    imp = (salario*10/100);
    areceber = (salario+50-imp);

    printf("O valor a receber e:%.2f",areceber);

  return 0;
}