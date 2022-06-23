// 6-Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa devera pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram  fornecidos. Exibir na tela o vetor final digitado.


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i, vet[10], aux[10], j, k;
    
    for (i = 0; i < 10; i++){
        scanf("%d", &vet[i]);
        for (j = 0; j < i; j++){
            if (vet[i] == vet[j]){
                printf("\nNumero repetido, entre com outro.\n");
                i--;
                continue;
            }
        }
    }

    for (i = 0; i < 10; i++){
        printf("\n%d", vet[i]);
    }
}
    
    
