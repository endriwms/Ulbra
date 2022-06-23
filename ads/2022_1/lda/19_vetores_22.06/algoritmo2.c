// 2-Faça um algoritmo que Preencha 4 vetores: 
// o primeiro com a nota da primeira prova; 
// o segundo com a nota da segunda prova;
// o terceiro com as médias ponderada das 2 primeiras notas;
// O Quarto com o nome do Aluno.

// O programa deve ao fim de cada leitura perguntar se o usuário deseja adicionar um novo aluno. Defina o vetor com no máximo 10 alunos, Após adicionados:

// O Programa deve possibilitar 4 opções:
// 1- Listar todos os alunos aprovados
// 2 -Listar todos os alunos reprovados
// 3- Listar todos os alunos com nota maior que uma nota informada pelo usuário.
// 4-Informar uma Posição e o programa exibir os dados e notas do aluno.
// 5- Encerrar o programa.


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    char nome[10][20];
    int nota1[10];
    int nota2[10];
    int mediaAritmetica[10];
    int i;

    printf("\nDigite o nome do aluno: ");
    scanf("%d%*c", nome[i]);

    printf("\nDigite a nota da primeira prova: ");
    scanf("%d%*c", &nota1[i]);

    printf("\nDigite a nota da segunda prova: ");
    scanf("%d%*c", &nota2[i]);

    
}
