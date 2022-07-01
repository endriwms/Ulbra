// 2-Faça um algoritmo que Preencha 4 vetores: 
// o primeiro com a nota da primeira prova; 
// o segundo com a nota da segunda prova;
// o terceiro com as médias aritmética das 2 primeiras notas;
// O Quarto com o nome do Aluno.

// O programa deve ao fim de cada leitura perguntar se o usuário deseja adicionar um novo aluno. Defina o vetor com no máximo 10 alunos, Após adicionados:

// O Programa deve possibilitar 4 opções:
// 1- Listar todos os alunos aprovados
// 2 -Listar todos os alunos reprovados
// 3- Listar todos os alunos com nota maior que uma nota informada pelo usuário.
// 4- Informar uma Posição e o programa exibir os dados e notas do aluno.
// 5- Encerrar o programa.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float nota1[10];
    float nota2[10];
    float media[10];
    char nome[10][20];
    int op, nota, posicao;
    int i = 0, contAlunos = 0;
    char opAdicionar;
    
    do{
        for(int i = 0; i < 10; i++){
            printf("Digite a primeira nota do aluno %d:\n", i+1);
            scanf("%f%*c", &nota1[i]);

            printf("Digite a segunda nota do aluno %d:\n", i+1);
            scanf("%f%*c", &nota2[i]);

            media[i] = (nota1[i] + nota2[i]) / 2;

            printf("Digite o nome do aluno %d:\n",i+1);
            scanf("%s%*c", &nome[i]);

            contAlunos++;

            printf("\n\nDeseja adicionar um novo aluno [S/N]:\n");
            scanf("%s%*c",&opAdicionar);

            if (opAdicionar == 'S' || opAdicionar == 's'){
                continue;
            }else{
                break;
            }
        }
        i++;    
    }while (i == 0);

    do{
        printf("\nQual opção do menu você deseja realizar?\n");
        printf("Opção 1: Listar todos os Aprovados.\n");
        printf("Opção 2: Listar todos os Reprovados.\n");
        printf("Opção 3: Listar todos os alunos com nota maior que uma nota informada pelo usuário.\n");
        printf("Opção 4: Informar uma Posição e exibir os dados e notas do aluno.\n");
        printf("Opção 5: Encerrar o programa.\n");
        scanf("%d%*c",&op);
        
        switch (op){
        case 1:
            printf("Os alunos aprovados são:\n");
            for(i = 0; i < contAlunos; i++){
                if (media[i] >= 7){  
                    printf("Aluno %d : %s -- Média %.2f\n",i+1, nome[i], media[i]);
                }
            }
            break;
        case 2:
            printf("Os alunos reprovados são:\n");
            for(i = 0; i < contAlunos; i++){
                if(media[i] < 7){  
                    printf("Aluno %d : %s -- Média: %.2f\n",i+1, nome[i], media[i]);
                }
            }
            break;
        case 3:
            printf("Digite uma nota:\n");
            scanf("%d", &nota);

            printf("Os alunos com nota maior que as informadas são:\n");
            for(i = 0; i < contAlunos; i++){
                if(nota < nota1[i] && nota < nota2[i]){
                    printf("Aluno %s\n", nome[i]);
                }
            }
            break;
        case 4:
            printf("Foram registrados %d alunos. Digite uma posição para verificação:\n", contAlunos);
            scanf("%d%*c", &posicao);

            for(i = 0; i < contAlunos; i++){
                if(posicao == i+1){
                    printf("Aluno: %s -- Nota 1: %.2f -- Nota 2: %.2f -- Média: %.2f\n", nome[i], nota1[i], nota2[i], media[i]);
                }
            }
            break;    
        }
    }while(op != 5);
    return 0;
}