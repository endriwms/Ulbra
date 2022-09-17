//Faça um programa que calcule e mostre a área de um trapézio. 
//Sabe-se que: A = ((base maior + base menor) * altura)/2

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    float basemaior, basemenor, altura, area;

    printf("Digite a base maior:\n");
    scanf("%f", &basemaior);

    printf("Digite a base menor:\n");
    scanf("%f", &basemenor);

    printf("Digite a altura:\n");
    scanf("%f", &altura);

    area = ((basemaior + basemenor) * altura/2);

    printf("A area do trapézio é de:\n%.2f\n", area);

    return 0;
}