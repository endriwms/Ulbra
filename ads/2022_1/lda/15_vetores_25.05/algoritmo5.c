//5. Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui. 

#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int numeros[10], par=0, contador=0;

    for(int i = 0; i < 10; i++){
        printf("Informe um valor inteiro:");
        scanf("%d", &numeros[i]);
    }
    for(int i = 0; i < 10; i++){
        if(numeros[i] % 2 == 0){
            contador = contador+1;
        }
    }

    printf("O Total de números pares é: %d", contador);

    return 0;
}