// Faça um programa para determinar se uma pessoa é maior ou menor de idade. Mostre também se ela já está apta a votar de forma obrigatória ou facultativa.  Conforme a Justiça eleitoral o voto é obrigatório para os eleitores com idade acima de 18 anos e facultativo para os analfabetos, para os eleitores maiores de 16 e menores de 18 anos, assim como para os maiores de 70 anos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float idade;

    printf("Digite sua idade:\n");
    scanf("%f", &idade);
    
    if (idade == 16 && idade < 18){
        printf("Você está apto a votar de forma facultativa.\n");
    }else if (idade >= 18 && idade < 70){
        printf("Você é obrigado a votar.\n");
    }else if (idade >= 70){
        printf("Você pode votar de forma facultativa.\n");
    }else {
        printf("Você ainda não pode votar.\n");
    }
    return 0;
}