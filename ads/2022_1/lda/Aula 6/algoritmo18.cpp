#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float tempC, fahrenheit;

    printf("digite a temperatura em graus Celsius\n");
    scanf("%f", &tempC);

    fahrenheit = (tempC*9/5)+32;

    printf("A temperatura em Fahrenheit fica: %.2f\n", fahrenheit);

    return 0;
}

//Faça um programa que receba uma temperatura em Celsius, calcule e mostre essa temperatura em 
//Fahrenheit. Sabe-se que F = 180*(C + 32)/100.