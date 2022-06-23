// 4-Faça um programa que leia um vetor de 5 posições para  números reais e, depois, um código inteiro. Se o código for zero, finalize o programa; se for 1, mostre o vetor na ordem  direta; se for 2, mostre o vetor na ordem inversa. Caso, o código diferir de 1 e 2  escreva uma mensagem informando que o código  e inválido. 

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet[5];
    int i, cod;

    for(i = 0; i < 5; i++){
        printf("Digite o %d valor:\n", i+1);
        scanf("%d%*c", &vet[i]);
    }

    do{
        printf("Digite o codigo:\n");
        scanf("%d", &cod);

        printf("\n");

        for(int k = 0; k < 3; k++){
            printf("Carregando");
            for(int j = 0; j < 3; j++){
                printf(".");
                Sleep(100);
            }
            printf("\n");
        }

        printf("\n");

        switch (cod){
        case 0:
            printf("Programa Encerrado...\n");
            break;
        case 1:
            for(i = 0; i < 5; i++){
                printf("Ordem direta: %d\n", vet[i]);
            }
            break;
        case 2:
            for(i = 4; i >= 0; i--){
                printf("Ordem inversa: %d\n", vet[i]);
            }
            break;
        default:
            printf("Código inválido!\n");
            break;
        }
    }while(cod != 0);

    return 0;

}