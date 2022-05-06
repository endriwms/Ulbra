//Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2. 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float diag_maior, diag_menor, area;

    printf("Digite a diagonal maior:\n");
    scanf("%f", &diag_maior);

    printf("Digite a diagonal menor:\n");
    scanf("%f", &diag_menor);

    area = (diag_maior * diag_menor/2);

    printf("A area do losangulo é de:\n%.2f\n", area);

    return 0;
}