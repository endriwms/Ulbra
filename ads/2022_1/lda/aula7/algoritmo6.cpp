#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <iostream>

int main()
{
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int num;

    printf("Digite um número:\n");
    scanf("%d", &num);


    if (num%2==0) {
        printf("O número é Par\n");
    } else {
        printf("O número é Ímpar\n");
    }

    return 0;
}