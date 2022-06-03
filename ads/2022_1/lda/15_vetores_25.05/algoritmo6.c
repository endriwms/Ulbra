//6. Faça um programa que receba do usuário um vetor com 10 posições. Em seguida, deverá ser impresso o maior e o menor elemento do vetor.

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet[10], i=0, menor, maior=0;

    for(i; i < 10; i++){
        printf("Escreva um número:\n");
        scanf("%d", &vet[i]);

        if(menor > vet[i]){
            menor = vet[i];
        }
        if(vet[i] > maior){
            maior = vet[i];
        }
    }

    printf("O menor é %d\n", menor);
    printf("O maior é %d\n", maior);

    return 0;
}