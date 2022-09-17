//Efetue um programa que mostre todos os números inteiros ímpares situados numa  faixa de dois números digitados pelo usuário usando o DO-WHILE


#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int n1, n2;

    printf("Digite o número 1\n");
    scanf("%i", &n1);
    printf("Digite o número 2\n");
    scanf("%i", &n2);

    do{
        if (n1 % 2 == 1){
        printf("%d\n", n1);
        }
        n1++;
        }while (n1 < n2);
        
}
