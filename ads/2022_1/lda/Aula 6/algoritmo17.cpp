#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

	float pi, raio, comprimento, area, volume;

    printf("Receba o raio de uma esfera, calcule e mostre:\n");
    printf("O comprimento, a área e o volume da esfera.\n");
    
	printf("\nRaio: ");
	scanf("%f", &raio); 
	pi = 3,14159;

	
	comprimento = 2.0 * pi * raio;

	area = pi * pow(raio, 2); 

	volume = 3.0 / 4.0 * pi * pow(raio, 3);

	printf("Comprimento: %.2f\n ", comprimento); //exibe o valor do comprimento
	printf("Área: %.2f\n", area); // exibe o valor de area
	printf("Volume: %.2f\n", volume); // exibe o valor de volume

	return 0;
}

// Faça um programa que receba o raio, calcule e mostre: 
// a) o comprimento de uma esfera; sabe-se que C = 2 * p R; 
// b) a área de uma esfera; sabe-se que A = p R2; 
// c) o volume de uma esfera; sabe-se que V = ¾ * p R3.
