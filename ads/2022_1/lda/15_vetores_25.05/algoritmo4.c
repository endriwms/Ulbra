//4. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final, seu programa deverá escrever a soma dos valores encontrados nas respectivas posições  X e Y .

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet[8], x, y, i, soma;

    for(i = 0;i <= 8;i++){
        scanf("%d",&vet[i]);
    }

    scanf("%d",&x);
    scanf("%d",&y);

    soma = (vet[x] + vet[y]);
    
    printf("\n A soma é:%d",soma);

    return(0);
}