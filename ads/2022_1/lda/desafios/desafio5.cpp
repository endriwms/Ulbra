// Elabore um programa que calcule o valor da cota de cada jogador nos três contextos: com 2 goleiros, com apenas 1 goleiro ou sem nenhum goleiro.
// O aluguel da quadra custa R$ 160,00
// Futebol 7 = 14 jogadores

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main (){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int nGoleiros, cota;

    printf("Quantos goleiros temos hoje?");
    scanf("%i", &nGoleiros);

    if (nGoleiros == 2){
        cota = (160 / 12);
        printf("Cada jogador pagará %.2iR$\n", cota);
    }else if (nGoleiros == 1){
            cota = (160 / 13);
            printf("Cada jogador pagará %.2iR$\n", cota);
    }else{
        cota = (160 / 14);
        printf("Cada jogador pagará %.2iR$\n", cota);
    }

    return 0;
}