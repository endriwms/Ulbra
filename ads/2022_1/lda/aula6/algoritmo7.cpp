//  Faça um programa que receba o peso de uma pessoa, calcule e mostre: 
// a) o novo peso, se a pessoa engordar 15% sobre o peso digitado; 
// b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float peso, peso_15, peso_20, novopeso;

    printf("Digite o peso:\n");
    scanf("%f", &peso);

    peso_15 = (peso * 15/100);
    peso_15 = (peso + peso_15);
    peso_20 = (peso * 20/100);
    peso_20 = (peso - peso_20);

    printf("O peso se a pessoa engordar será de:\n%.2f\n", peso_15);
    printf("O peso se a pessoa emagrecer será de:\n%.2f\n", peso_20);

    return 0;
}