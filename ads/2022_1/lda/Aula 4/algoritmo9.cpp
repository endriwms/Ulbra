#include <stdio.h>
#define pi 3.14
int main() 
{
  float base,altura,area;

    printf("A base do Triangulo e\n");
      scanf("%f",&base);
    printf("A altura do Triangulo e\n");
      scanf("%f",&altura);

    area = (base*altura/2);
    
    printf("A area do Triangulo e:%.2f",area);

  return 0;
}