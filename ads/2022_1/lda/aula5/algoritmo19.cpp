#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "Portuguese");
    float a_degrau, a_usuario, qtd_degraus;

    printf("Digite a altura do degrau:\n");
    scanf("%f",&a_degrau);

    printf("Digite a altura que o usuario quer alcançar:\n");
    scanf("%f",&a_usuario);

    qtd_degraus = (a_usuario/a_degrau);
    
    printf("O usuário deverá subir:%.2f\n",qtd_degraus);

  return 0;
}