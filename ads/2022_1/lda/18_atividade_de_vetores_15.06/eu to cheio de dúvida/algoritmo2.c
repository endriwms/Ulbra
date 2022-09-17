// 2 - Escreve um programa que sorteie, aleatoriamente, 10 números e armazene estes em um vetor.
// Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se estiver, diga a posição que está.


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h> 

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    
    int i;
    int numero;  
    int vetor[10];

    srand((unsigned)time(NULL));
    for(int i=0 ; i < 10 ; i++){  
        vetor[i] = rand() % 100 + 1;
        printf("Numero %d: %d\n", i+1, vetor[i]);
    }  

    printf("\nDigite um numero qualquer: \n");  
    scanf("%d",&numero); 

    if(numero == vetor[i]){  
            printf("\nNúmero %d SORTEADO na posição do vetor [%d]\n", numero, i);  
        }else{  
            printf("\nSeu número não é igual aos sorteio\n");  
        }   

    return 0;  
}