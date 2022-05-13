//Efetue um programa que leia a nota de 10 alunos de uma turma. Ao final, deve ser escrita a média geral da turma. Esse algoritmo deve ser feito duas vezes uma usando o FOR

#include <stdio.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int nota, media, soma;

    for(int i = 0; i < 10; i++){
        printf("Digite a nota %d\n", i+1);
        scanf("%i", &nota);
        soma = (nota + soma);
    }
    media = (soma / 10);
    printf("A média é %d\n", media);
}
