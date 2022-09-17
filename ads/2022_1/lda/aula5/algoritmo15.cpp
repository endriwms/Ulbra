#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Portuguese");
    float p_fab, perc_d, perc_i, vlr_d, vlr_i, p_final;

    printf("Digite o preço de fabrica:\n");
    scanf("%f",&p_fab);

    printf("Digite o percentual do distribuidor:\n");
    scanf("%f",&perc_d);

    printf("Digite o percentual dos impostos:\n");
    scanf("%f",&perc_i);

    vlr_d = (p_fab * perc_d/100);
    vlr_i = (p_fab * perc_i/100);
    p_final = (p_fab+vlr_d+vlr_i);
    
    printf("O Valor correspondente ao lucro do distribuidor é:%.2f\n",vlr_d);
    printf("O Valor correspondente aos impostos é:%.2f\n",vlr_d);
    printf("O preço final do veículo será de:%.2f\n",p_final);

  return 0;
}