// Faça um programa que verifique a validade de uma senha fornecida pelo usuário. A senha válida é o número 1234.
// OBS: Se a senha informada pelo usuário for inválida, a mensagem "ACESSO NEGADO" deve ser impressa e repetida a solicitação de uma nova senha até que ela seja válida. Caso contrário deve ser impressa a mensagem "ACESSO PERMITIDO" junto com um número que representa quantas vezes a senha foi informada.


#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main() {
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int senha, senhaValida = 1234;
    int tentativas = 0;

    printf("Digite sua senha:\n");
    scanf("%d", &senha);

    do{
        if 
        printf("ACESSO NEGADO\n");

        printf("Digite sua senha: ");
        scanf("%d", &senha);
    }while (senha != senhaValida);

    printf("ACESSO PERMITIDO!\n");
    printf("O usuário errou a senha %d vezes\n", tentativas+1);
}