//Efetue um programa que mostre todos os números inteiros ímpares situados na faixa de 1000 a 1500. Esse algoritmo deve ser feito duas vezes uma usando o FOR

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    for(int i = 1000; i < 1500; i++){
        if(i % 2 == 1){
            printf("%d\n", i);
            }
    }

}
