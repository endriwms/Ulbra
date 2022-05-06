#include <stdio.h>
int main ()
{
    float pes, polegada, jardas, milhas;

    printf("Digite o valor em pes:\n");
    scanf("%f",&pes);
    polegada = (pes *12);
    printf("O numero de polegadas e:%.2f\n",polegada);

    printf("Digite o numero de pes\n");
    scanf("%f",&pes);
    jardas = (pes /3);
    printf("O numero de jardas e:%.2f\n",jardas);

    printf("Digite o valor em jardas:\n");
    scanf("%f",&jardas);
    milhas = (jardas /1760);
    printf("O numero de milhas e:%.2f\n",milhas);

    return 0;
}