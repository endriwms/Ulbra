#include <stdio.h>
#define pi 3.14
int main() 
{
  float depos,tax,rend,total;

    printf("Digite o valor do deposito\n");
      scanf("%f",&depos);
    printf("Digite o valor da taxa\n");
      scanf("%f",&tax);

    rend = (depos*tax/100);
    total = (depos+rend);
    
    printf("O rendimento foi de:%.2f",rend);
    printf("O valor total e de:%.2f",total);

  return 0;
}