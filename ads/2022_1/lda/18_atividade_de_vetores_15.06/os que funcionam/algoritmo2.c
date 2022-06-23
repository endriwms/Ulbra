// 2 - Escreve um programa que sorteie, aleatoriamente, 10 números e armazene estes em um vetor.
// Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se estiver, diga a posição que está.


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h> 

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    
    int tem = 0;
    int i;
    int numero;  
    int vetor[10];  

    srand((unsigned)time(NULL));
    for(i = 0 ; i < 10 ; i++){  
        vetor[i] = rand() % 100+1;
        printf("Numero %d: %d\n", i+1, vetor[i]);
    } 

    printf("\n");  

    printf("Digite um numero qualquer: ");  
    scanf("%d",&numero);  

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

    if(vetor[i] == numero){
        for(i = 0; i < 10; i++){
            if(numero == vetor[i]){
                printf("Numero %d SORTEADO na posição do vetor [%d]\n", numero, i+1);  
            }
        }
    }else{
        printf("Seu número não está entre os sorteados \n");
    }
    return 0;  
}  