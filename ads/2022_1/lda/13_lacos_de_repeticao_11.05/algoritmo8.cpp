//Elabore um programa que escreva a tabuada do número 9.

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <windows.h>

int main ()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);
    
    int tabuada = 9;

    for (int i = 1; i <= 10; ++i){
        //1 x 5 = 5
        printf("%ix%i = %i\n", i, tabuada, i*tabuada);
    }
    
    return 0;
}