// 1-Faça um programa que leia 10 números inteiros, armazene-os em um vetor, solicite um valor de referência inteiro e: 
// a) imprima os números do vetor que são maiores que o valor referência 
// b) retorne quantos números armazenados no vetor são menores que o valor de referência 
// c) retorne quantas vezes o valor de referência aparece no vetor 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int num[10];
    int ref, conta = 0, menores = 0, iguais = 0;
    int i;

    for(i = 0; i < 10; i++){
        printf("Qual um número\n", i+1);
        scanf("%d", &num[i]);
    }

    printf("Digite o valor de referência\n", i+1);
    scanf("%d", &ref);

    for(i = 0; i < 10; i++){
        if(num[i] > ref){
            conta++;
        }else{
            if(num[i] < ref){
                menores++;
            }else{
                iguais++;
            }
            
        }

        if(ref > 0){
            printf("\nOs valores maiores que a referencia sao:\n");
            for(i = 0; i < 10; i++){
                if(num[i] > ref)
                printf("%d\n", num[i]);
            }
        }else{
            printf("Não existem valores maiores que a referência\n");
        }

        if(menores > 0){
            printf("Existem %d valores menores que a referencia\n", menores);
        }else{
            printf("Nao existem valores menores que a referencia\n");
        }

        if(iguais > 0){
            printf("Existem %d valores iguais ao da referencia\n", iguais);
        }else{
            printf("Nao existem valores iguais ao da referencia\n");
        }

    }


}