// Faça um programa que escreva os números de 1 a 20, em ordem decrescente.

#include <stdio.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i;

    for (i = 20; i >= 1; i--){
        printf("%d", i);
    }

    return 0;

}