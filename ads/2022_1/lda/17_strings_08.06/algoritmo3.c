//FUP que leia uma string e um caracter, o programa deve informar quantas vezes o caracter lido aparece na string.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    char carac[50], c;
    int i, conta = 0;

    printf("Digite uma string: \n");
    gets(carac);
    fflush(stdin);

    do{
        printf("Digite um caractere: \n");
        scanf("%c", &c);
        
        for(i = 0; carac[i] != '\0'; i++){
            
            //printf("%c == %c\n", carac[i], c);
            if(carac[i] == c){
            conta++;
            }else{
                printf("Caractere Inválido. Tente novamente.\n");
            }
            printf("conta = %d\n", conta);
        }
    }while(conta == 0);

    
    return 0;


    // for(i = 0; carac[i] != '\0'; i++){
    //     if(carac[i] == c){
    //         conta++;
    //     }
    // }

    // if(conta == 0){
    //     printf("Caractere não encontrado.\n");
    // }else{
    //     printf("Digite um caractere: \n");
    // }
}