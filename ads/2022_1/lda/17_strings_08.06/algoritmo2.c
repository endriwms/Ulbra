//FUP que leia o nome e o sobrenome de uma pessoa em duas variáveis distintas, o programa deve armazenar os dois valores uma terceira variável.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    char nome[10];
    char sobrenome[10];
    char nomeCompleto[20];

    printf("Digite o Nome: \n");
    scanf("%s%*c", nome);

    printf("Digite o sobrenome: \n");
    scanf("%s%*c", sobrenome);
    
    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("Seu nome completo é: %s", strupr(nomeCompleto));
}