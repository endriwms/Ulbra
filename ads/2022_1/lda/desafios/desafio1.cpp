// Elabore um algoritmo para determinar se uma pessoa é maior de idade. Caso a pessoa seja maior de idade, deve mostrar a mensagem "Você já pode frequentar o Clube dos Coroas no Entrevero". Caso seja menor de idade, deve exibir: "Você é menor de idade, falta X anos para você ser maior", onde X sera a diferença da idade atual para 18 anos.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float idade, X;

    printf("Quantos anos você tem?\n");
    scanf("%f", &idade);

    X = (idade - 18);

    if (idade >= 18){
        printf("Você já pode frequentar o Clube dos Coroas no Entrevero\n");
    }else if (idade<18){
        printf("Você é menor de idade, faltam %.f anos para você ser maior\n", X); 
    }

    return 0;
}