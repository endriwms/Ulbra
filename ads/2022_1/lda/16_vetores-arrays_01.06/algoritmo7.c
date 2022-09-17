//Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números negativos e a soma dos números positivos desse vetor.
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>


int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet[10], i, somaP=0, somaN=0;

    for(i = 0; i <= 9; i++){
        printf("informe o valor do vetor [%i]", i + 1);
        scanf("%i", &vet[i]);

        if(vet[i] > 0){
            somaN = somaP + vet[i];
            if(vet[i] < 0){
                somaP = somaN + 1;
            }
        }
    }
    printf("numeros positivos soma = %d\n", somaP);
    printf("numeros negativos quantidade = %d\n", somaN);
    return 0;
}