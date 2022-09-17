#include <stdio.h>
#define pi 3.14
int main() 
{
  float soma, n1,n2,n3,n4;
  printf("Digite o valor de n1;\n");
    scanf("%f%*c", &n1);

  printf("Digite o valor de n2;\n");
    scanf("%f%*c", &n2);

  printf("Digite o valor de n3;\n");
    scanf("%f%*c", &n3);
    
  printf("Digite o valor de n4;\n");
    scanf("%f%*c", &n4);

  soma = n1 + n2 + n3 + n4;

  printf("A soma e: %.f\n",soma);
  return 0;
}