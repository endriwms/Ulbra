//Elabore um programa que escreva a tabuada de um número qualquer.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

int main ()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    
    int tabuada = 0;
    printf("\nDigite a tabuada que você deseja \n\t\t\t\n>>>");
    scanf("%i", &tabuada);

    for (int x = 1; x<=10; ++x){
        //1 x 5 = 5
        printf("%ix%i = %i\n", x, tabuada, x *tabuada);
    }
    
    return 0;
}