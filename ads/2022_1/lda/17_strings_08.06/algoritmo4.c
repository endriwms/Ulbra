//FUP que leia 3 strings e escreva em ordem alfabética.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int string1[10];
    int string2[10];
    int string3[10];
    int i;

    printf("Digite a string1: \n");
    gets(string1);

    printf("Digite a string2: \n");
    gets(string2);

    printf("Digite a string3: \n");
    gets(string3);
    
}