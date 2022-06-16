// 2 - Escreve um programa que sorteie, aleatoriamente, 10 números e armazene estes em um vetor.
// Em seguida, o usuário digita um número e seu programa em C deve acusar se o número digitado está no vetor ou não. Se estiver, diga a posição que está.


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h> 

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet[10];
    int i, controle = 0;
    int n;

    for(i = 0; i < 10; i++){
        vet[i] = rand()%10;
        printf("Numero %d: %d\n", i, vet[i]);
    }

    printf ("digite um numero: ");
    scanf ("%d", &n);

    for (i = 0; i < 10; i++){
	    if(n == vet[i]){
	   	    printf ("Esta no vetor na posicao %d", i);
	   	    controle = 1;
	   	    break;
	    }
    }

    if(!controle){
        printf ("Nao esta no vetor");
    }
}   