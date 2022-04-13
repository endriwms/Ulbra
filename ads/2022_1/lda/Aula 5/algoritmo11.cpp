#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main() 
{

    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float n1, quad, cubo, r2, r3;

    printf("Digite um numero:\n");
    scanf("%f",&n1);

    quad = pow(n1,2);
    cubo = pow(n1,3);
    r2 = sqrt(n1);
    r3 = cbrt(n1);
    
    printf("O número ao quadrado e:%.2f\n",quad);
    printf("O nú
    mero ao cubo e e:%.2f\n",cubo);
    printf("A raiz quadrada do numero é:%.2f\n",r2);
    printf("A raiz cubica do numero é:%.2f\n",r3);

  return 0;
}