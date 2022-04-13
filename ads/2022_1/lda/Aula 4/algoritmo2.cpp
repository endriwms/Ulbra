#include <stdio.h>
#define pi 3.14
int main() 
{
    float media,nota1,nota2,nota3;
    printf("Digite o valor de nota1;\n");
      scanf("%f%*c",&nota1);

    printf("Digite o valor de nota2;\n");
      scanf("%f%*c",&nota2);
      
    printf("Digite o valor de nota3;\n");
      scanf("%f%*c",&nota3);
        
    media = (nota1+nota2+nota3)/3;

    printf("a media e:%.2f\n",(nota1+nota2+nota3)/3);

return 0;

}