//Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagemde Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, no máximo quinze alunos. Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, no máximo dez alunos. Mostre o número das matrículas que aparecem nos dois vetores.

#include <stdio.h>

int main(){

    int tLogica[5];
    int tLinguagem[3];

    for(int i = 0; i < 5; i++){
        printf("Digite o Código aluno de Lógica\n");
        scanf("%d", &tLogica[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Digite o Código do Aluno de Linguagem\n");
        scanf("%d", &tLinguagem[i]);
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            if(tLinguagem[i] == tLogica[i]){
                printf("Aluno nas duas turmas: %d\n", tLinguagem[i]);
            }
        }
    }
}