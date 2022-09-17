//O Vinicius quer vender essa bike por R$18999,00 reais para mim. sim um completo absurdo . Mas Supondo que ele vai parcelar essa compra, faça um programa que:
// 1- pergunte o valor da parcela que eu posso pagar e o algoritmo ira calcular quantas parcelas o Vinicius deve fazer .
// 2- Informe a quantidade de parcelas e ele mostre o valor da parcelas.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <iostream>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float valor, possopagar, parcela;

    printf("Digite o valor da Bike\n");
    scanf("%f", &valor);

    printf("Digite o valor da parcela que você pode pagar\n");
    scanf("%f", &possopagar);

    parcela = (valor / possopagar);

    printf("Para que você possa comprar essa bike, Vinicius deverá fazer em %.2fx de %.2fR$\n", parcela, possopagar);

    return 0;
    
}