#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float medidaAng, distancia, medidaEscada;

    printf("Digite a medida do ângulo\n");
    scanf("%f", &medidaAng);


    return 0;
}

//Faça um programa que receba a medida do ângulo formado por uma escada apoiada no chão e a distância em que a escada está da parede, calcule e mostre a medida da escada para que se possa alcançar 
//sua ponta. 