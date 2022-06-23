// 1- Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e: 
// a) imprima os números do vetor que são maiores que o valor referência 
// b) retorne quantos números armazenados no vetor são menores que o valor de referência 
// c) retorne quantas vezes o valor de referência aparece no vetor 

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>
int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP(CPAGE_UTF8);

    int num[10];
    int i, ref, conta = 0, menores = 0, iguais = 0;
    for (i = 0; i < 10; i++){
        printf("Insira o %d número: ", i + 1);
        scanf("%d%*c", &num[i]);
    }

    printf("\nInsira o valor de referência:\n");
    scanf("%d%*c", &ref);

    for(i = 0; i < 10; i++){
        if(num[i] > ref){
            conta++;
        }else if(num[i] < ref){
            menores++;
        }else{
            iguais++;
        }
    }
    
    printf("\n");

    for(int k = 0; k < 3; k++){
        printf("Carregando");
        for(i = 0; i < 3; i++){
            printf(".");
            Sleep(100);
        }
        printf("\n");
    }

    if(ref > 0){
        printf("\nOs números maiores que o referência são:\n");
        for (i = 0; i < 10; i++){
            if (num[i] > ref)
                printf("%d\n", num[i]);
        }
    }else{
        printf("\nNão existem valores maiores que a ref\n");
    }

    if(menores > 0){
        printf("\nExistem %d valores menores que a referência\n", menores);
    }else{
        printf("\nNão existem valores menores que a referência\n");
    }
    if(iguais > 0){
        printf("\nExistem %d valores iguais ao da referência\n", iguais);
    }else{
        printf("\nNão existem valores iguais ao da referência\n");
    }
}