// 3 - Fazer um algorítimo que seja lido uma pal e imprima:
// A quantidade de vogais que compõe a palavra.
// A quantidade de letras dessa palavra.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <string.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    float nota1[10],nota2[10],media[10];
    char nome[10][20];
    int opcao, i=0, contadorAlunos=0;
    char opcaoAdicionar;
    
    do{
        for(int i = 0; i < 10; i++){
            printf("Digite a primeira nota do aluno %d:\n",i+1);
            scanf("%f%*c",&nota1[i]);

            printf("Digite a segunda nota do aluno %d:\n",i+1);
            scanf("%f%*c",&nota2[i]);

            media[i]=(nota1[i]+nota2[i])/2;

            printf("Digite o nome do aluno %d:\n",i+1);
            scanf("%s%*c",&nome[i]);

            contadorAlunos++;

            printf("\n\nDeseja adicionar um novo aluno [S/N]:\n");
            scanf("%s%*c",&opcaoAdicionar);

            if (opcaoAdicionar == 'S' || opcaoAdicionar == 's'){
                continue;
            }else{
                break;
            }
        }
        i++;
            
    }while (i==0);

    do{
        printf("\nQual opção do menu você deseja:\n");
        printf("Opção 1: Listar todos os alunos Aprovados.\n");
        printf("Opção 2: Listar todos os Alunos Reprovados.\n");
        printf("Opção 3: Listar todos os alunos com nota maior que uma nota informada pelo usuário.\n");
        printf("Opção 4: Informar uma Posição e o programa exibir os dados e notas do aluno.\n");
        printf("Opção 5: Encerrar o programa.\n");
        
        scanf("%d%*c",&opcao);
        
        switch (opcao){
        case 1:
            printf("Os alunos aprovados são:\n");
            for (i = 0; i < contadorAlunos; i++){
                if (media[i] >= 7){  
                    printf("Aluno %d : %s -- Média %.2f\n",i+1, nome[i], media[i]);
                }
            }
            break;
        case 2:-
            printf("Os alunos reprovados são:\n");
            for (i = 0; i < contadorAlunos; i++){
                if (media[i]<7){  
                    printf("Aluno %d : %s -- Média: %.2f\n",i+1, nome[i], media[i]);
                }
            }
            break;
        
        }
    } while (opcao!=5);
    
    return 0;
}
