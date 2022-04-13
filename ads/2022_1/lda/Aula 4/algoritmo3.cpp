#include <stdio.h>
#define pi 3.14
int main() 
{
    float media,nota1,nota2,nota3,mediap;
    float peso1,peso2,peso3,somap;

    printf("Digite a primeira nota;\n");
      scanf("%f%*c",&nota1);
    printf("Digite o peso da primeira nota;\n");
      scanf("%f%*c",&peso1);

    printf("Digite a segunda nota;\n");
      scanf("%f%*c",&nota2);
    printf("Digite o peso da segunda nota;\n");
      scanf("%f%*c",&peso2);

    printf("Digite a terceira nota;\n");
      scanf("%f%*c",&nota3);
    printf("Digite o peso da terceira nota;\n");
      scanf("%f%*c",&peso3);
        
    somap = (peso1+peso2+peso3);
    mediap = ((nota1*peso1)+(nota2*peso2)+(nota3+peso3))/somap;

    printf("A media ponderada é:%.2f\n",mediap);

return 0;

}