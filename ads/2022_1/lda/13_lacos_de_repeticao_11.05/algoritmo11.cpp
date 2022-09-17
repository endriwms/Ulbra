// Faça um programa que leia a matrícula, o nome e as três notas de 10 alunos, e indique para cada aluno, se ele foi aprovado ou não.

#include <stdio.h>
#include <windows.h>

struct Aluno{
    char nome[30];
    int matricula;
};

typedef struct Aluno func;

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float n1, n2, n3, media;
    int i=0;
    func registro[10];

    for (i = 0; i < 10; i++){
        printf("Digite o Nome do Aluno %d:\n", i+1);
        scanf("%s%*c", &registro[i].nome);

        printf("Digite a matricula de %s:\n", registro[i].nome);
        scanf("%d", &registro[i].matricula);

        printf("Digite a nota 1:\n");
        scanf("%f", &n1);

        printf("Digite a nota 2:\n");
        scanf("%f", &n2);

        printf("Digite a nota 3:\n");
        scanf("%f", &n3);
 
        media = (n1 + n2 + n3)/3;

        if( media >= 7){
            printf("A média de %s foi de: %.f\n", registro[i].nome, media);
            printf("Aprovado :)\n");
        }else{
            printf("A média de %s foi de: %.f\n", registro[i].nome, media);
            printf("Reprovado :(\n");
        }

    }

    return 0;
}