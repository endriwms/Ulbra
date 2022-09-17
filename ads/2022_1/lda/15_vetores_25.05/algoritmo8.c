//8. Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa. 

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i, vet[6];

    for(i = 0; i < 6; i++){
        printf("Digite 6 números inteiros\n", i+1);
        scanf("%d", &vet[i]);
    }

    printf("A ordem inversa do vetor é:\n");
    for(i = 5; i >= 0; i--){
        printf("%d", vet[i]);
    }
    return 0;

}