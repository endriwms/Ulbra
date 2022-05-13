// Faça um algoritmo que calcule quantos km eu preciso andar por dia, por semana e por mês para chegar na minha meta.

// Sabendo que em 62,7 km eu gasto 2664 calorias em media, calcule tbm quantas calorias vou gastar em média a cada pedal por dia, semana e mes.

// meta = 5000km

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float meta, kmDia, kcalMedia, dia, semana, mes;

    printf("Digite qual é a sua meta:\n");
    scanf("%f", &meta);

    kmDia = (meta / 365);

    printf("Você precisa andar %.f por dia para atingir a meta.\n", kmDia);


    return 0;
}