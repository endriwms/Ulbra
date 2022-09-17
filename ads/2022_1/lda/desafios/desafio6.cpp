//Peça para o usuário informar quatro números distintos, você deve desenvolver um algoritmo que determine e imprima a soma dos três menores.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, n3, n4, soma;

    printf("Diga o número 1\n");
    scanf("%f", &n1);

    printf("Diga o número 2\n");
    scanf("%f", &n2);

    printf("Diga o número 3\n");
    scanf("%f", &n3);
    
    printf("Diga o número 4\n");
    scanf("%f", &n4);

    if(n1 > n2 && n1 > n3 && n1 > n4){
        soma = (n2 + n3 + n4);
        printf("%.f\n", soma);
    }else if(n2 > n1 && n2 > n3 && n2 > n4){
        soma = (n1 + n3 + n4);
        printf("%.f\n", soma);
    }else if(n3 > n1 && n3 > n2 && n3 > n4){
        soma = n1 + n2 + n4;
        printf("%.f\n", soma);
    }else if(n4 > n1 && n4 > n2 && n4 > n3){
        soma = n1 + n2 + n3;
        printf("%.f\n", soma);
    }

    return 0;
}