#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    float potenciaLamp, larguraCom, comprimentoCom, areaCom, potenciaNeces, numLamp;

    printf("digite a potência da lâmpada em Wats\n");
    scanf("%f", &potenciaLamp);

    printf("digite a largura do cômodo\n");
    scanf("%f", &larguraCom);

    printf("digite o comprimento do cômodo\n");
    scanf("%f", &comprimentoCom);

    areaCom = (larguraCom*comprimentoCom);
    potenciaNeces = (areaCom*18);
    numLamp = (potenciaNeces/potenciaLamp);

    printf("O número de lâmpadas necessárias para iluminar o cômodo é: %.2f\n", numLamp);

    return 0;
}

//Sabe-se que, para iluminar de maneira correta os cômodos de uma casa, para cada m2
//, deve-se usar 18 W 
//de potência. Faça um programa que receba as duas dimensões de um cômodo (em metros), calcule e mostre 
//a sua área (em m2
//) e a potência de iluminação que deverá ser utilizada.