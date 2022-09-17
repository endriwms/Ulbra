#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
#define pi 3.14
int main() 
{
    setlocale(LC_ALL, "Portuguese");
    float ang, alt, escada, radiano;

    printf("Digite o angulo:\n");
    scanf("%f",&ang);

    printf("Digite a altura:\n");
    scanf("%f",&alt);

    radiano = (ang*pi/180);
    escada = (alt/radiano);
    
    printf("A medida da escada é:%.2f\n",escada);

  return 0;
}