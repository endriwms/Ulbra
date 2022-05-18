// Efetue um programa que leia 5 números. Para cada número fornecido, escrever se ele é NULO, NEGATIVO ou POSITIVO.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int n;

    for(int i=0; i <5; i++){
        printf("Digite o número %d\n", i+1);
        scanf("%i", &n);

        if(n < 0 ){
            printf("Numero Negativo\n");
        }else{
            if(n > 0){
                printf("Numero positivo\n");
            }else{
                printf("E um numero Nulo\n");
            }
        }
    }

}
