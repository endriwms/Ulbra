//2. Crie um programa que leia 6 valores inteiros e, em seguida, mostre na tela os valores lidos.

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int valores[6], i;

    for(i = 0; i < 6; i++){
        printf("Digite o valor\n");
        scanf("%d%*c", &valores[i]);
    }

    for( i = 0; i < 6; i++){
        printf("O valor digitado: %d\n", valores[i]);
    }
}