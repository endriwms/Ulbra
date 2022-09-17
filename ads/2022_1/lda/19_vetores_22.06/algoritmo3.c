// 3 - Fazer um algorítimo que seja lido uma pal e imprima:
// A quantidade de vogais que compõe a palavra.
// A quantidade de letras dessa palavra.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int palavra[20];
    int i, cont, qtdVogais = 0, tamanho=0;

    printf("Digite um nome:\n");
    scanf("%s", &palavra[i]);

    for(i = 0; i < palavra[i]; i++){
        if(palavra[i] == 'a' || palavra[i] == 'e' || palavra[i] == 'i' || palavra[i] == 'o' || palavra[i] == 'u'){
            qtdVogais++;
        }
    }
    tamanho = strlen(palavra);
    printf("A palavra %s possui %d Letras e %d vogais\n", palavra, tamanho, qtdVogais);

    return 0;
}