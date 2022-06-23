// 1 — Preencha um vetor com 100 números inteiros de forma randômica. Quando o número randômico for 999 o preenchimento deve ser encerrado.
// Após  preenchido   O Programa deve possibilitar 4 opções:
// 1- exibir uma lista os números presentes no vetor, não incluído o 999.
// 2-  imprimir o vetor na ordem inversa.
// 3-  Exibir o maior número
// 4 - Exibir quantos números foram sorteados.
// 5- Encerrar o programa.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <windows.h>
#include <time.h>

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int vetor[100];
    int i;
    int conta = 0, op = 0, maior = 0;

    srand((unsigned)time(NULL));

    for(i = 0; i < 100; i++){
        vetor[i] = rand() % 1000;
            printf("Numero %d: %d\n", i+1, vetor[i]);
            conta++;
        if(vetor[i] == 999){
            break;
        }
    }

    printf("\n");

    do{
        printf("\n");
        printf("Digite 1 para exibir uma lista os números presentes no vetor, não incluído o 999.\n");
        printf("Digite 2 para imprimir o vetor na ordem inversa.\n");
        printf("Digite 3 para Exibir o maior número\n");
        printf("Digite 4 para Exibir quantos números foram sorteados.\n");
        scanf("%d%*c", &op);
        printf("\n");

        switch(op){
        case 1:
            for(i = 0; i < 100; i++){
                printf("Vetor [%d], número: %d\n", i+1, vetor[i]);
            }
            break;
        case 2:
            for(i = 99; i >= 0; i--){
                printf("Vetor [%d], número: %d\n", i+1, vetor[i]);
            }
            break;
        case 3:
            for(i = 0; i < 100; i++){
                if(vetor[i] > maior){
                    maior=vetor[i];
                }
            }
            printf("O maior número é: %d\n", maior);
            break;
        case 4:
            printf("Foram sorteados %d números\n", conta);
            break;
        default:
            printf("Encerrando...\n");
            break;
        }
    }while (op != 5);
}
