// 5-Faça um programa que receba do usuário dois vetores, A e B, com 10 números inteiros cada. Crie um novo vetor denominado C calculando C = A - B. Mostre na tela os dados do vetor C.


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vetA[10];
    int vetB[10];
    int vetC[10];
    int i ;    

    for (i=0; i<10; i++){ 
        printf("Digite um valor inteiro: ");
        scanf ("%d",&vetA[i]);
    }

    printf("\n");

    for (i=0; i<10; i++){ 
        printf("Digite um valor inteiro (b): ");
        scanf ("%d",&vetB[i]);
    }

    printf("\n");

    for (i=0; i<10; i++){  
        vetC[i] = vetA[i] - vetB[i];
        printf("Vetor A - Vetor B eh igual: %d\n", vetC[i]);
    }

}