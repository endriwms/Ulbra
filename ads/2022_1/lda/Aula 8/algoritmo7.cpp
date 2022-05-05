// Faça um programa que lê um conjunto de 4 valores i, a, b, c, onde i é um valor inteiro e positivo e a, b, c, são quaisquer valores reais e os escreva. A seguir:
// Se i=1 escrever os 3 valores a, b, c em ordem crescente;
// Se i=2 escrever os 3 valores a, b, c em ordem decrescente;
// Se i=3 escrever os 3 valores de forma que o maior valor entre a, b, c fica entre os outros dois.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int a, b, c, i;

    printf("Digite o valor i:\n");
    scanf("%i", &i);

    printf("Digite o valor A:\n");
    scanf("%i", &a);

    printf("Digite o valor B:\n");
    scanf("%i", &b);

    printf("Digite o valor C:\n");
    scanf("%i", &b);

    if (i == 1){
        if(a > b && a > c && b > c)
        printf("%d%d%d", c, b, a);
        }else if (a > b && a > c && b > c){
        printf("%d%d%d", b, c, a);
        }else if ( b > a && b > c && a > c){
        printf("%d%d%d",c,a,b);
        }else if ( b > a && b > c && c > a){
        printf("%d%d%d",a,c,b);
        }else if ( c > a && c > b && b > a){
        printf("%d%d%d",a,b,c);
        }else if ( c > a && c > b && a > b){
        printf("%d%d%d",b,a,c);
    }

    if ( i == 2){
        if (a < b && a < c && b < c){
        printf("%d%d%d",c,b,a);
        }else if (a < b && a < c && c < b){
        printf("%d%d%d",b,c,a);
        }else if ( b < a && b < c && a < c){
        printf("%d%d%d",c,a,b);
        }else if ( b < a && b < c && c < a){
        printf("%d%d%d",a,c,b);
        }else if ( c < a && c < b && b < a){
        printf("%d%d%d",a,b,c);
        }else if ( c < a && c < b && a < b){
        printf("%d%d%d",b,a,c);
    }

    if ( i == 3 ){
        if (a < b && a < c && b < c){
        printf("%d%d%d",b,c,a);
        }else if (a < b && a < c && c < b){
        printf("%d%d%d",c,b,a);
        }else if ( b < a && b < c && a < c){
        printf("%d%d%d",a,c,b);
        }else if ( b < a && b < c && c < a){
        printf("%d%d%d",c,a,b);
        }else if ( c < a && c < b && b < a){
        printf("%d%d%d",b,a,c);
        }else if ( c < a && c < b && a < b){
        printf("%d%d%d",a,b,c);
        }
    }

    return 0;
}