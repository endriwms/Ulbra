#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    char nome[15];
    char sobrenome[] = "Schiavenato";
    char meio[] = "Moraes";
    char nomeCompleto[25];

    printf("Digite o Nome: \n");
    scanf("%s%*c", nome);

    printf("%s %s %s\n", nome, meio, sobrenome);

    if(strcmp(nome, "Endriw") == 0){
        printf("Nomes Iguais\n");
    }else{
        printf("Nomes diferentes\n");
    }

    strcat(nomeCompleto, nome);
    strcat(nomeCompleto, " ");
    strcat(nomeCompleto, sobrenome);

    printf("Seu nome completo é: %s", strupr(nomeCompleto));

    //strcpy()
    // char outroNome[10];
    // strcpy(outroNome, nome);

    // int tam = strlen(nomeCompleto);
    // printf("\nO tamanho é: %d", tam);
    //strdup(nomeCompleto)

}