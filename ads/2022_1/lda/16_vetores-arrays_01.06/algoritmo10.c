//Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pela soma de cada número par do primeiro vetor somado a todos os números do segundo vetor. O segundo vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor tem no segundo vetor.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vet1[10] = {4, 7, 5, 8, 2, 15, 9, 6, 10, 11};
    int vet2[5] = {3, 4, 5, 8, 2};
    int vetResult1[5];
    int vetResult2[5];
    int i;

    for(i = 0; i < 6; i++){
        if(vet1[i] % 2 == 0){
            par++;
        }else{
            impar++;
        }
    }


}

