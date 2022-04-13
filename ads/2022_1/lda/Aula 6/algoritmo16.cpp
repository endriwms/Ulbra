#include <stdio.h>
#include <math.h>
#include <windows.h>

int main ()
{
      UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float lado1, lado2, hipotenusa;

    printf("digite o valor do lado A\n");
    scanf("%f", &lado1);

    printf("digite o valor do lado B\n");
    scanf("%f", &lado2);

    hipotenusa = (lado1*lado2) + (lado2*2);

    printf("o valor da hipotenusa é: %.2f\n", hipotenusa);


    return 0;
}

//Faça um programa que receba o valor dos catetos de um triângulo, calcule e mostre o valor da hipotenusa. 