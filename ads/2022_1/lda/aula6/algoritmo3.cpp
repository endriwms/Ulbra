// Faça um programa que receba dois números, calcule e mostre a divisão do 
// primeiro número pelo segundo. sabe-se que o segundo número não pode ser zero, 
// portanto, não é necessário se preocupar com validações. //

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
int main() 
{
  UINT CPAGE_UTF8 = 65001;
  SetConsoleOutputCP (CPAGE_UTF8);
  float n1, n2, divisao;

  printf("Digite o valor do primeiro numero:\n");
  scanf("%f", &n1);

  printf("Digite o valor do primeiro numero:\n");
  scanf("%f", &n2);

  divisao = (n1/n2);

  printf("O resultado da divisão é:\n%.2f\n", divisao);

  return 0;
}