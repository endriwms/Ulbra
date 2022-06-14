//Faça um programa(FUP) que leia uma string e a escreva em letras maiúsculas e letras minúsculas. (NO MAC/ ALGUNS WINDOWS o strupr não esta ok


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    char str1[7];

    printf("Digite 'Banana': \n");
    scanf("%s%*c", str1);

    printf("Em minúsculo: %s\n", strulwr(str1));
    printf("Em maiúsculo: %s\n", strupr(str1));

}