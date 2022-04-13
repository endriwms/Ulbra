#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Portuguese");
    float horas_t, vlr_sal_min, vlr_hora_t, vlr_sal_bru, imp, vlr_sal_liq;

    printf("Digite as horas trabalhadas:\n");
    scanf("%f",&horas_t);

    printf("Digite o valor do salário mínimo:\n");
    scanf("%f",&vlr_sal_min);

    vlr_hora_t = (vlr_sal_min/2);
    vlr_sal_bru = (vlr_hora_t * horas_t);
    imp = (vlr_sal_bru*3/100);
    vlr_sal_liq = (vlr_sal_bru-imp);
    
    printf("O salário liquido é:%.2f\n",vlr_sal_liq);

  return 0;
}