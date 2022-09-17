////Elabore um programa que calcule e escreva a soma de 10 números lidos. Esse algorimo deve ser feito três vezes uma usando o WHILE

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int numero, soma;

    soma=0;
    int i=0;

    while(i < 10){
        printf("Digite o número %d\n", i+1);
        scanf("%i", &numero);
        soma = (numero + soma);
        i++;
    }

    printf("A soma é: %d\n", soma);

}
