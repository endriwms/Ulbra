//10. Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, calcule e imprima a média geral.

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i;
    float nota[15], mediaGeral, soma;

    for(i = 0; i < 15; i++){
        printf("Digite a nota do aluno %d\n", i+1);
        scanf("%f", &nota[i]);

        soma += (nota[i]);
        mediaGeral = (soma / 15);
    }
    
    printf("A média geral é %.2f\n", mediaGeral);

    return 0;
}