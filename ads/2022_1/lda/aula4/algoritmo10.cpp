#include <stdio.h>
#define pi 3.14
int main() 
{
  float area,raio;

    printf("O valor do raio e\n");
      scanf("%f",&raio);

    area = (pi*raio*raio);
    
    printf("A area do circulo e:%.2f",area);

  return 0;
}