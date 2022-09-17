#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
  float ano_atual, ano_nascimento, idade_atual, idade_2050;

    printf("Digite o ano atual:\n");
    scanf("%f",&ano_atual);

    printf("Digite o ano de nascimento:\n");
    scanf("%f",&ano_nascimento);

    idade_atual = (ano_atual-ano_nascimento);
    idade_2050 = (2050-ano_nascimento);
    
    printf("A idade atual e:%.2f\n",idade_atual);
    printf("A idade em 2050 sera de:%.2f\n",idade_2050);

  return 0;
}