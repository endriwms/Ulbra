//7. Escreva um programa que leia 10 números inteiros e os armazene em um vetor. Imprima  o vetor, o maior elemento e a posição em que ele se encontra.

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet[10];
    int i;

    for(i = 0; i < 10; i++){
        printf("Digite o valor do elemento da posição %d\n", i+1);
        scanf("%d", &vet[i]);
    }

    int maior = vet[0];
    int posMaior = 1;
    
    for(i = 1; i < 10; i++){
        if(vet[i] > maior){
            maior = vet[i];
            posMaior = i+1;
        }
    }

    printf("O vetor é:\n");
    for(i = 0; i < 10; i++){
        printf("%d", vet[i]);
    }

    printf("O maior elemento é %d, localizado na posição %d.\n", maior, posMaior);

    return 0;

}