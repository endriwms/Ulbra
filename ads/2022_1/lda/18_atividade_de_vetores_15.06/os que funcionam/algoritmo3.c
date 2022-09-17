// 3 - Faça um programa que leia um vetor de 10 posições e verifique se existem valores iguais  e os escreva na tela.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int num[10], i = 0, k = 0, aux;

    printf("Digite 10 numeros: \n");

    for(i = 0; i < 10; i++){
        printf("[%i] ", i+1);
        scanf("%d", &num[i]);
    }

    for(int k = 0; k < 3; k++){
        printf("Carregando");
        for(int j = 0; j < 3; j++){
            printf(".");
            Sleep(100);
        }
        printf("\n");
    }

    printf("Numeros repetidos:\n");
    for(i = 0; i < 10; i++){
        for(k = i+1; k < 10; k++){
            if(num[k] == num[i]){
                aux = num[i];
                printf("%d\n", aux);
            }
        }
    }
    return 0;
}