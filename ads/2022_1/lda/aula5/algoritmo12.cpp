#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() 
{
  float n1, n2, r1, r2;

    printf("Digite o primeiro numero:\n");
    scanf("%f",&n1);

    printf("Digite o segundo numero:\n");
    scanf("%f",&n2);

    r1 = pow(n1,n2);
    r2 = pow(n2,n1);
    
    printf("O numero 1 elevado ao numero 2 e:%.2f\n",r1);
    printf("O numero 2 elevado ao numero 1 e:%.2f\n",r2);

  return 0;
}