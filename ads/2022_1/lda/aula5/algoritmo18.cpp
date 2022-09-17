#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "portuguese");
    float peso_saco, racao_gato1, racao_gato2, total_final;

    printf("Digite o peso do saco em kg:\n");
    scanf("%f",&peso_saco);

    printf("Digite a quantidade para o gato 1:\n");
    scanf("%f",&racao_gato1);

    printf("Digite a quantidade para o gato 2:\n");
    scanf("%f",&racao_gato2);

    racao_gato1 = (racao_gato1/kg);
    racao_gato2 = (racao_gato2/kg);
    total_final = (peso_saco-5 * (racao_gato1+racao_gato2));
    
    printf("Restará após 5 dias:%.2f\n",total_final);

  return 0;
}