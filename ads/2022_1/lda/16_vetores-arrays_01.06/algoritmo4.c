//Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos iguais a 30, mostrando as posições em que apareceram.

#include <stdlib.h>
#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet[15], cont_vet=0, pos_vet, i;

    for(i = 0; i < 15; i++){
        printf("Digite o %d numero: ",i+1);
        scanf("%d", &vet[i]);
        if(vet[i] == 30){
             cont_vet+=1;
        }         
    }

    printf("\nO numero 30 aparece %d vezes e nas posições: \n", cont_vet);
    for(i = 0; i < 15; i++){
        if(vet[i] == 30){
            printf("%d\t", i);
        }
    }

    printf(" do vetor\n");                                           
    return 0;
}   