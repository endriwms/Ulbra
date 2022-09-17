// Faça um programa para ler 10 valores inteiros. Para cada valor fornecido escrever uma mensagem que indica se cada valor fornecido é PAR ou ÍMPAR.

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int numero;
    int i=0;
    int nPar=0;
    int nImpar=0;

    while(i < 10){
        printf("Digite o número %d\n", i+1);
        scanf("%i", &numero);
        i++;
        if( i % 2 == 1){
            printf("O número é IMPAR\n");
            nImpar++;
        }else{
            printf("O número é PAR\n");
            nPar++;
        }
    }

    printf("Foram executados %d pares\n", nPar);
    printf("Foram executados %d Impares\n", nImpar);

}