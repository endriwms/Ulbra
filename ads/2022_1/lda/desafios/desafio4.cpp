//faça um algoritmo que leia o valor do presente, leia a quantidade de filhos e mostre o valor que cada filho deve pagar com uma linda mensagem de dia das mães né!

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vPresente, nFilhos, total;

    printf("Diga o valor do presente\n");
    scanf("%i", &vPresente);

    printf("Diga o número de filhos\n");
    scanf("%i", &nFilhos);

    total = (vPresente / nFilhos);

    printf("O valor que cada filho deve pagar é:%.2iR$\n", total);
    printf("Nem toda heroina usa capa. Feliz dia das Mães!\n");

    return 0;
}