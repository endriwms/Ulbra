// Escrever um programa que gera os números de 1000 a 1999 e escreve aqueles que divididos por 11 dão um resto igual a 5.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    for (int i=1000; i < 2000; i++){
        if(i % 11 == 5){
            printf("%d\n", i);
        }
    }
        
    return 0;
}
