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

    char pal[20];
    int cont, qtdVogais = 0, tamanho=0;

    printf("Digite um nome:\n");
    scanf("%s", pal);

    for(cont = 0; cont < pal[cont]; cont++){
        if (pal[cont] == 'a' || pal[cont] == 'e' || pal[cont] == 'i' || pal[cont] == 'o' || pal[cont] == 'u'){
            qtdVogais++;
        }
    }
    tamanho = strlen(pal);

    printf("A palavra %s possui %d Letras e %d vogais\n", pal, tamanho, qtdVogais);

    return 0;
}
