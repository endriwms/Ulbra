//Faça um programa que leia um número N, e realize a soma dos números de 1 a N. Ao final, deve-se escrever o resultado. Esse algoritmo deve ser feito usando o While

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
