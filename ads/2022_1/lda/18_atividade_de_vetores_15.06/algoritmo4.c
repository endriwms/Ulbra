// 4-Faça um programa que leia um vetor de 5 posições para  números reais e, depois, um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem  direta; se for 2, mostre o vetor na ordem inversa. Caso, o código diferir de 1 e 2  escreva uma mensagem informando que o código  e inválido. 


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet[5];
    int i, cod = 0;

    for(i = 0; i < 5; i++){
        printf("Digite o %d valor:\n", i+1);
        scanf("%d%*c", &vet[i]);
    }

    printf("Digite o codigo:\n");
    scanf("%d", &cod);

    if(cod == 0){
        printf("Programa Encerrado...\n");
    }else{
        if(cod == 1){
            for(i = 0; i < 5; i++){
                printf("Ordem direta: %d\n", vet[i]);
            }
        }
        if(cod == 2){
            for(i = 5; i < 0; i--){
                printf("Ordem inversa: %d\n", vet[i]);
            }
        }
        if(cod > 2 ){
            printf("Código inválido");
        }
    }
}

