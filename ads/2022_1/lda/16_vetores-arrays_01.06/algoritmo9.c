//Faça um programa que preencha 3 vetores com 10 posições cada um: o primeiro vetor, com nomes de dez produtos, o segundo com os codigos dos 10 produtos e o terceiro com os preços dos produtos. Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão aumento. Sabe-se que os produtos sofrerão aumento são aqueles que possuem código par ou preço superior a R$1.000,00. Sabe-se ainda que, para os produtos satisfizerem às duas condições anteriores, código e preço, o aumento será de 20%; para aqueles que satisfizerem apenas a condições de código, o aumento será de 15%; e para aqueles que satisfizerem apenas a condição de preço, o aumento será de 10%.

#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

typedef struct prod{
char produtos[20];
}Desc;

int main(){
    UINT CPAGE_UTF8 = 65001;
    SetConsoleOutputCP (CPAGE_UTF8);

    int i, j, k;
    Desc vet1[10];
    int vet2[10];
    float vet3[10], novo[10];

    for(i = 0; i < 10; i++){
        printf("Digite o nome do produto\n");
        setbuf(stdin, NULL);
        scanf("%s", &vet1[i]);

        printf("Digite o codigo do produto\n");
        scanf("%d", &vet2[i]);

        printf("Digite o preco dos produtos\n");
        scanf("%f", &vet3[i]);
    }

    for(j = 0; j < 10; j++){
        if((vet2[j] % 2 == 0) && (vet3[j] > 1000)){
            novo[j] = vet3[j];
            novo[j] += novo[j] * 0.2;
        }

        if(vet2[i] % 2 == 0){
            novo[j]=vet3[j];
            novo[j]+=novo[j] * 0.15;
        }
        if(vet3[j] > 1000){
            novo[j] = vet3[j];
            novo[j] += novo[j] * 0.1;
        }
    }

    for(k = 0; k < 10; k++){
        printf("Nome do produto: %s\t O codigo: %d\t O preco: %.2f\t Novo preco: %.2f\n", vet1[k].produtos, vet2[k], vet3[k], novo[k]);
    }

    return 0;

}